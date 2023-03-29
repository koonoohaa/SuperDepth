
#include "pch.h"

class CChildView : public CWnd
{
// Construction
public:
	CChildView();

// Attributes
public:
	void GamePause();
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChildView)
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CChildView();

	// Generated message map functions
protected:
	//{{AFX_MSG(CChildView)
	afx_msg void OnPaint();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	CObList m_Objects;

	CBitmap m_VirtualBitmap;
	CDC		m_VirtualDC;

	bool m_bGamePause;

private:
	int random(int __num) { return(int)(((long)rand()*__num)/(RAND_MAX+1)); }

public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
protected:
};

