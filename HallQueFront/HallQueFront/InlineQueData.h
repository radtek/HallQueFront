#pragma once

#include "SLZData.h"
#include <afxmt.h>
#include "SLZWindowQueryView.h"
// CInlineQueData 命令目标

class CInlineQueData : public CObject
{
	friend class CCallThread;
public:
	CInlineQueData(SLZWindowQueryView& rWindowTable);
	virtual ~CInlineQueData();
	//获取队列排队的首个
	BOOL GetInlineQueData(const UINT iWinId, SLZData& rdata);
	void Add(SLZData& data);
	void AddHeadData(const SLZData& data);
	UINT GetCount();//获取总人数
	UINT GetBussCount(const CString& strBussId);//获取对应队列的排队人数
	BOOL GetInlineQueData(SLZData& rdata);//获取第一个数据
	void RemoveAllData();
	int GetMaxQueNum(const CString queID);
	UINT GetCandoQueCount(UINT iWinID);//获取窗口能够处理的队列排队人数总和
	BOOL AlterData(const CString QueNum,const CString strPhoneNum,const CString strMsg);
	BOOL GetInlineQueData(int i,SLZData& data);
private:
	CList<SLZData> m_lstInlineQue;//排队队列
	CMutex m_mtInlineQue;
	SLZWindowQueryView& m_rWindowTable;
};


