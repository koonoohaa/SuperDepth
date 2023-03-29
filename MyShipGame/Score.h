#pragma once
#include "MyObject.h"

class CScore : public CMyObject  
{
public:
	bool Draw(CDC* pDC, bool bPause);
	CScore(CPoint ptPos, int nScore, DWORD nColor);
	virtual ~CScore();

private:
	COLORREF m_nColor;
	int m_nProcess;
	int m_nScore;
};

