/*
*INST4D3D - INST4KILL.NET
*
*2015-2015 INST4D3D https://SITE
*
*Semi Open Source - C�digo Fonte todo liberado, mas alguns programas para sua total utiliza��o
*s�o de c�digo restrito!
*
*C�digo: Vari�veis, M�todos, classes e etc...Todos escritos em ingl�s pelo fato de melhor organiza��o!
*
*Projeto inciciado em: 04/10/2015
*
*Criador do Projeto: Kssiobr
*Contribu�dores:
*/

#pragma once

#include "inst4d3d.h"
#include "Color.h"

class Label : public Color
{
public:
	Label() {}

	void DrawLabel(int x, int y, D3DCOLOR color, const char *String);
	void DrawLabel(int x, int y, D3DCOLOR color, LPD3DXFONT pFont, int Type, bool Shadow, const char *String, ...);
	void DrawLabel(int x, int y, D3DCOLOR color, LPD3DXFONT pFont, const char *String);
	void DrawLabel(int x, int y, D3DCOLOR color, int Type, const char *String);
	void DrawLabel(int x, int y, D3DCOLOR color, bool Shadow, const char *String);

	LPD3DXFONT lpFont;
protected:
	inline void DefaultLabel(int x, int y, D3DCOLOR color, LPD3DXFONT pFont, int Type, bool Shadow, const char *String, ...);
};
