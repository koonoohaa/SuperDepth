#pragma once
class CMyObject : public CObject  
{
public:
	bool IsEnemy()  { return m_bEnemy; }
	CPoint GetPos() { return m_ptPos; }
	bool IsBomb() { return m_bBomb; }

	virtual bool Draw(CDC* pDC, bool bPause)=0;

	CMyObject();
	virtual ~CMyObject();
protected:
	CPoint m_ptPos;
	bool m_bEnemy;
	bool m_bBomb;
};

