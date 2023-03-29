#pragma once

#include "MyObject.h"

#define SHIP_WIDTH		64
#define SHIP_HEIGHT		27

class CMyShip : public CMyObject  
{
public:
	static void DeleteImage();
	static BOOL LoadImage();
	bool Draw(CDC* pDC, bool bPause);
	void SetPos(int x, int y) 
	{ 
		m_ptPos.x = x; 
		m_ptPos.y = y; 
	}
	CPoint GetPos() { return m_ptPos; }
	CMyShip(CPoint ptPos);
	virtual ~CMyShip();

private:
	static CImageList m_Images;

};

