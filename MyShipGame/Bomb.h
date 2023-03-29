#pragma once

#include "MyObject.h"
#define BOMB_HEIGHT 32
#define BOMB_WIDTH  32

class CBomb :public CMyObject
{
public:
    CBomb(int nVert);
    virtual ~CBomb();

    CPoint GetPos() { return m_ptPos; }
    CRect GetRect() { return CRect(m_ptPos, CSize(BOMB_WIDTH, BOMB_HEIGHT)); }
    void SetSpeed(int sp) { Speed = sp; };
    void SetPos(int x, int y)
    {
        m_ptPos.x = x;
        m_ptPos.y = y;
    }

    static void DeleteImage();
    static BOOL LoadImage();

    bool Draw(CDC* pDC, bool bPause);

private:
    int Speed = 5;
    static CImageList m_Images;
};

