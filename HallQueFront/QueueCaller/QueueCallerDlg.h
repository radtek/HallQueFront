// QueueCallerDlg.h : ͷ�ļ�
//

#pragma once
#include "UserInfo.h"

// CQueueCallerDlg �Ի���
class CQueueCallerDlg : public CDialog
{
// ����
public:
	CQueueCallerDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_QUEUECALLER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonRegister();

private:
	BOOL ReadUserFileFromFiles();
	BOOL WriteUserInfoIntoFiles();
	void SetOrtherUnAuto();
public:
	afx_msg void OnBnClickedButtonFindpassword();
	afx_msg void OnBnClickedCheckRemember();
	afx_msg void OnBnClickedCheckAutologin();
	afx_msg void OnCbnSelchangeComboUsername();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
private:
	CString m_strPassWord;
	CString m_strUserName;
	CString m_strUserInfoFilePath;
	CComboBox m_cs_ComUserInfo;
	CButton m_cs_AutoLogin;
	CButton m_cs_Remember;
	CMap<int,int,CUserInfo,CUserInfo> m_UserInfoMap;
public:
	afx_msg void OnCbnEditchangeComboUsername();
	afx_msg void OnBnClickedButtonLogin();
};