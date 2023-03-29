
// MyShipGameDlg.h: 头文件
//

#pragma once

#include "ChildView.h"

// CMyShipGameDlg 对话框
class CMyShipGameDlg : public CDialogEx
{
// 构造
public:
	CMyShipGameDlg(CWnd* pParent = nullptr);	// 标准构造函数
	CChildView    m_wndView;
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MYSHIPGAME_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
	afx_msg void OnSetFocus(CWnd* pOldWnd);
//	virtual void Dump(CDumpContext& dc) const;
//	virtual void AssertValid() const;
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnBnClickedPause();
};
