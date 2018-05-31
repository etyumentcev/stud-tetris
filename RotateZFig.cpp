#include "RotateZFig.h"


RotateZFig::RotateZFig()
{
	rotator.emplace(0, new Zfigure(field));
	rotator.emplace(1, new ZfigureR(field));
	rotator.emplace(2, new ZfigureD(field));
	rotator.emplace(3, new ZfigureL(field));

}


Figures*  RotateZFig::Rotate()
{

	if (dir != 3)
	{
		rotator[dir];
		dir++;
	}
	else {
		dir = 0;
	}
	return rotator[dir];

}

RotateZFig::~RotateZFig()
{
}
