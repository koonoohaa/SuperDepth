#pragma once

#include "MyObject.h"

#define EXPLOSION_WIDTH		62
#define EXPLOSION_HEIGHT	63

class CExplosion : public CMyObject  
{
public:
	static void DeleteImage();
	static BOOL LoadImage();

	bool Draw(CDC* pDC, bool bPause);
	CExplosion(CPoint ptPos);
	virtual ~CExplosion();

private:
	int m_nProcess;

	static CImageList m_Images;
};


