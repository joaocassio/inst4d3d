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

#include "Label.h"

void Label::DrawLabel(int x, int y, D3DCOLOR color, const char * String)
{
	DefaultLabel(x, y, color, this->lpFont, NULL, false, String);
}

void Label::DrawLabel(int x, int y, D3DCOLOR color, LPD3DXFONT pFont, int Type, bool Shadow, const char * String, ...)
{
	DefaultLabel(x, y, color, pFont, Type, Shadow, String);
}

void Label::DrawLabel(int x, int y, D3DCOLOR color, LPD3DXFONT pFont, const char * String)
{
	DefaultLabel(x, y, color, pFont, NULL, false, String);
}

void Label::DrawLabel(int x, int y, D3DCOLOR color, int Type, const char * String)
{
	DefaultLabel(x, y, color, this->lpFont, Type, false, String);
}

void Label::DrawLabel(int x, int y, D3DCOLOR color, bool Shadow, const char * String)
{
	DefaultLabel(x, y, color, this->lpFont, NULL, Shadow, String);
}

inline void Label::DefaultLabel(int x, int y, D3DCOLOR color, LPD3DXFONT pFont, int Type, bool Shadow, const char * String, ...)
{
	if (!pFont)
		return;

	RECT FontPos = { x, y, x + 120, y + 16 };
	char buf[1024] = { '\0' };
	va_list va_alist;

	va_start(va_alist, String);
	vsprintf_s(buf, String, va_alist);
	va_end(va_alist);

	if (Shadow == true)
		pFont->DrawTextA(NULL, buf, -1, &FontPos, Type | DT_NOCLIP, this->Black);

	pFont->DrawTextA(NULL, buf, -1, &FontPos, Type | DT_NOCLIP, color);
}
