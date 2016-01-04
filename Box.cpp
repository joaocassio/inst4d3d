/*
*INST4D3D - INST4KILL.NET
*
*2015-2015 INST4D3D https://SITE
*
*Semi Open Source - Código Fonte todo liberado, mas alguns programas para sua total utilização
*são de código restrito!
*
*Código: Variáveis, Métodos, classes e etc...Todos escritos em inglês pelo fato de melhor organização!
*
*Projeto inciciado em: 04/10/2015
*
*Criador do Projeto: Kssiobr
*Contribuídores:
*/

#include "Box.h"

//Cria uma caixa normal e simples
void Box::DrawBox(int x, int y, int w, int h, DWORD Color)
{
	if (!pDevice)
		return;

	DefaultBox(x, y, w, h, NULL, false, Color, Color, NULL);
}

//Caixa Com borda
void Box::DrawBox(int x, int y, int w, int h, int Pixel, DWORD Color, DWORD ColorBorder)
{
	if (!pDevice)
		return;

	DefaultBox(x, y, w, h, Pixel, true, Color, Color, ColorBorder);
}

//Degradê sem Borda
void Box::DrawBox(int x, int y, int w, int h, DWORD ColorTop, DWORD ColorBase)
{
	if (!pDevice)
		return;

	DefaultBox(x, y, w, h, NULL, false, ColorTop, ColorBase, NULL);	
}

//Degradê com Borda
void Box::DrawBox(int x, int y, int w, int h, int Pixel, DWORD ColorTop, DWORD ColorBase, DWORD ColorBorder)
{
	if (!pDevice)
		return;

	DefaultBox(x, y, w, h, Pixel, true, ColorTop, ColorBase, ColorBorder);
}

//Apenas Borda
void Box::DrawBorder(int x, int y, int w, int h, int Pixel, DWORD Color)
{
	if (!pDevice)
		return;

	DrawBox(x, y, Pixel, h, Color);
	DrawBox(x, y + h, w, Pixel, Color);
	DrawBox(x, y, w, Pixel, Color);
	DrawBox(x + w, y, Pixel, h + Pixel, Color);
}

inline void Box::DefaultBox(int x, int y, int w, int h, int Pixel, bool bBorder, DWORD Color1, DWORD Color2, DWORD ColorBorder)
{
	if (!pDevice)
		return;

	struct D3DVERTEX
	{
		float x, y, z, rhw;
		DWORD color;
	};

	D3DVERTEX   vertices[4] =
	{
		{ x, y, w, h, Color1 },
		{ x, y, w, h, Color1 },
		{ x, y, w, h, Color1 },
		{ x, y, w, h, Color1 }
	};

	vertices[0].x = x;
	vertices[0].y = y;
	vertices[0].rhw = 1.0f;
	vertices[0].color = Color1;

	vertices[1].x = x + w;
	vertices[1].y = y;
	vertices[1].rhw = 1.0f;
	vertices[1].color = Color1;

	vertices[2].x = x;
	vertices[2].y = y + h;
	vertices[2].rhw = 1.0f;
	vertices[2].color = Color2;

	vertices[3].x = x + w;
	vertices[3].y = y + h;
	vertices[3].rhw = 1.0f;
	vertices[3].color = Color2;

	pDevice->SetTexture(0, NULL);
	pDevice->SetPixelShader(0);
	pDevice->SetFVF(D3DFVF_XYZRHW | D3DFVF_DIFFUSE);
	pDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, true);
	pDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA);
	pDevice->SetRenderState(D3DRS_ZENABLE, FALSE);
	pDevice->SetRenderState(D3DRS_CULLMODE, D3DCULL_NONE);

	pDevice->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP, 2, vertices, sizeof(D3DVERTEX));
	if (bBorder)
		DrawBorder(x + 1, y + 1, w + 1, h + 1, Pixel, ColorBorder);
}

