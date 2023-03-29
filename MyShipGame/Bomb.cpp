#include "pch.h"
#include "Bomb.h"
#include "MyShipGame.h"

CImageList CBomb::m_Images;
CBomb::CBomb(int nVert)
{
	m_ptPos.y = 50;
	m_ptPos.x = nVert;
	m_bBomb = true;
}

CBomb::~CBomb()
{
}

void CBomb::DeleteImage()
{
	m_Images.DeleteImageList();
}

BOOL CBomb::LoadImage()
{
	CBitmap bmp;
	bmp.LoadBitmap(IDB_BOMB);

	if (!m_Images.Create(BOMB_WIDTH, BOMB_HEIGHT, ILC_COLOR24 | ILC_MASK, 1, 0))
		return FALSE;

	m_Images.Add(&bmp, RGB(255, 0, 255));

	return TRUE;
}

bool CBomb::Draw(CDC* pDC, bool bPause)
{
	m_Images.Draw(pDC, 0, m_ptPos, ILD_TRANSPARENT);
	if (bPause)
		return false;

	m_ptPos.y += Speed;
	if (m_ptPos.y > GAME_HEIGHT)
		return true;

	return false;
}
