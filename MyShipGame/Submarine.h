#pragma once
#include "MyObject.h"

#define SUBMARINE_WIDTH		63
#define SUBMARINE_HEIGHT	19

class CSubmarine : public CMyObject
{
public:
	static void DeleteImage();
	static BOOL LoadImage();
	
	CRect GetRect() { return CRect(m_ptPos, CSize(SUBMARINE_WIDTH, SUBMARINE_HEIGHT)); }
	int GetType() { return m_nType; }
	bool Draw(CDC* pDC, bool bPause);
	CSubmarine(bool bDir, int nVert, int nType, int nSpeed);
	virtual ~CSubmarine();

private:
	int m_nType;
	bool m_bDirect;
	int m_nSpeed;

	static CImageList m_Images;
};

