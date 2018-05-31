#include "RotateTFig.h"


RotateTFig::RotateTFig()
{

	rotator.emplace(0, new Tfigure(field));
	rotator.emplace(1, new TfigureR(field));
	rotator.emplace(2, new TfigureD(field));
	rotator.emplace(3, new TfigureL(field));
}


Figures*  RotateTFig::Rotate()
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

RotateTFig::~RotateTFig()
{
}
