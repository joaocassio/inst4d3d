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

class Box
{
public:
	Box() {}

	void DrawBox(int x, int y, int w, int h, DWORD Color);
	void DrawBox(int x, int y, int w, int h, int Pixel, DWORD Color, DWORD ColorBorder);
	void DrawBox(int x, int y, int w, int h, DWORD ColorTop, DWORD ColorBase);
	void DrawBox(int x, int y, int w, int h, int Pixel, DWORD ColorTop, DWORD ColorBase, DWORD ColorBorder);
	void DrawBorder(int x, int y, int w, int h, int Pixel, DWORD Color);	

	LPDIRECT3DDEVICE9 pDevice;
protected:
	inline void DefaultBox(int x, int y, int w, int h, int Pixel, bool bBorder, DWORD Color1, DWORD Color2, DWORD ColorBorder);
};
