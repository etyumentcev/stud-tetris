#ifndef ROTATEZFIG_H
#define ROTATEZFIG_H

#include"RotateFabric.h"
#include<map>
#include"Z-figure.h"
#include"Field.h"


class RotateZFig:public RotateFabric
{
	Field*field;
public:
	RotateZFig();
	int dir = 0;
	map <int, Figures*>rotator;
	Figures*  Rotate();
	~RotateZFig();
};

#endif // !ROTATEZFIG_H