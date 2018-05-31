#ifndef ROTATESQ_H
#define ROTATESQ_H

#include"RotateFabric.h"
#include<map>
#include"Squard.h"
#include "Field.h"

class RotateSq :public RotateFabric
{
	Field*field;
public:
	RotateSq();
	int dir = 0;
	Figures* Rotate();
	map <int, Figures*>rotator;
	~RotateSq();
};

#endif