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

#include "Color.h"

Color::Color()
{
	//Fisrt Colors
	this->Red	= 0XFFFF0000;
	this->Green	= 0XFF00FF00;
	this->Blue	= 0XFF0000FF;
	//The Black and White
	this->Black = 0XFF000000;
	this->White = 0XFFFFFFFF;
}

DWORD Color::CreateColor(unsigned int alpha, unsigned int red, unsigned int green, unsigned int blue)
{
	DWORD color = D3DCOLOR_ARGB(alpha, red, green, blue);
	return color;
}
