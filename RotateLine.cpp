#include "RotateLine.h"


RotateLine::RotateLine()
{
	rotator.emplace(0, new Line(field));
	rotator.emplace(1, new LineRight(field));
	rotator.emplace(2, new LineDown(field));
	rotator.emplace(3, new LineLeft(field));

}

Figures*  RotateLine::Rotate()
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


RotateLine::~RotateLine()
{
}
