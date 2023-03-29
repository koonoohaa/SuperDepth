// MyObject.cpp: implementation of the CMyObject class.
//
//////////////////////////////////////////////////////////////////////

#include "pch.h"
#include "MyShipGame.h"
#include "MyObject.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CMyObject::CMyObject()
{
	m_bEnemy = false;
	m_bBomb = false;
}

CMyObject::~CMyObject()
{

}
