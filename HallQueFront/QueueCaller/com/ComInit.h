#pragma once

class CComInit
{
private:
	CComInit(void);
public:
	~CComInit(void);
	//�򿪴�����������������
	int OpenWndScreen(int ncom);
	int m_canUse[10];//���汾�������еĿ��ô��ں�
	HANDLE m_hComWndScreen;//��������(������)
	HANDLE m_hComReadCard;//ˢ��������
	HANDLE m_hComMsg;//����è����
	HANDLE OpenComm(int ncom);//�򿪴���
	///try�������еĿ��õĴ���
	int TryCom( int nCom);
	//��ˢ��������
	int OpenCardComm( int ncom );
	//�򿪶���è����
	//���浽�ļ�
	void SaveComm();
	//���ļ�
	CString GetCardComm();
	CString GetWndComm();
	CString GetMsgComm();
	void SetMsgComm(const CString strCom)
	{
		m_cMsgComm = strCom;
	}
private:
	//��ʼ������
	void InitCom();
	CString m_cCardComm;
	CString m_cWndComm;
	CString m_cMsgComm;
	CString m_strPath;
public:
	OVERLAPPED m_write_os,m_read_os;
public:
	//��ȡΨһʵ��
	static CComInit* GetInstance(){
		static CComInit instance;
		return &instance;
	}
};