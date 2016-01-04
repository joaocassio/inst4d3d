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
#pragma once

#include "inst4d3d.h"

class Color
{
public:
	Color();

	D3DCOLOR CreateColor(unsigned int alpha, unsigned int red, unsigned int green, unsigned int blue);
	D3DCOLOR Red, Green, Blue, Black, White;
};

