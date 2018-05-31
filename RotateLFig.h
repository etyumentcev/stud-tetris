#ifndef ROTATELFIG_H
#define ROTATELFIG_H

#include"RotateFabric.h"
#include<map>
#include "L-figure.h"

class RotateLFig :public RotateFabric
{
	Field*field;
public:
	RotateLFig();
	int dir = 0;
	map <int, Figures*>rotator;
	Figures*  Rotate();
	~RotateLFig();
};
#endif
