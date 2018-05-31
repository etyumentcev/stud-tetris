#ifndef ROTATETFIG_H
#define ROTATETFIG_H

#include"RotateFabric.h"
#include<map>
#include "Field.h"
#include "T-figure.h"


class RotateTFig :public RotateFabric
{
	Field*field;
public:
	RotateTFig();
	int dir = 0;
	map <int, Figures*>rotator;
	Figures*  Rotate();
	~RotateTFig();
};

#endif