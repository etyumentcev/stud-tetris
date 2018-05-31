#include "RotateLFig.h"


RotateLFig::RotateLFig()
{
	rotator.emplace(0, new Lfigure(field));
	rotator.emplace(1, new LfigureR(field));
	rotator.emplace(2, new LfigureD(field));
	rotator.emplace(3, new LfigureL(field));
}

Figures*  RotateLFig::Rotate()

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


RotateLFig::~RotateLFig()
{
}
