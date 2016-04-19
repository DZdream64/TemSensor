
// TemSensorDlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"
#include <vector>

class CTemData;
// CTemSensorDlg �Ի���
class CTemSensorDlg : public CDialogEx
{
// ����
public:
	CTemSensorDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEMSENSOR_DIALOG };
#endif

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
	afx_msg void OnBnClickedAddData();
	afx_msg void OnBnClickedDeleteData();

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_listTemData;
	std::vector<CTemData*> m_temData;
};
