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

class Color
{
public:
	Color();

	D3DCOLOR CreateColor(unsigned int alpha, unsigned int red, unsigned int green, unsigned int blue);
	D3DCOLOR Red, Green, Blue, Black, White;
};

