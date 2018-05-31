#ifndef ROTATELINE_H
#define ROTATELINE_H

#include"RotateFabric.h"
#include<map>
#include"Field.h"
#include"Line.h"


class RotateLine :public RotateFabric
{
	Field*field;
public:
	RotateLine();
	map <int, Figures*>rotator;
	int dir = 0;
	//Linemap line;
	Figures* Rotate();
	~RotateLine();
};

#endif