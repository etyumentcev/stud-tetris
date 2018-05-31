#include "RotateSq.h"


RotateSq::RotateSq()
{
	rotator.emplace(0, new Squard(field));
	rotator.emplace(1, new SquardR(field));
	rotator.emplace(2, new SquardD(field));
	rotator.emplace(3, new SquardL(field));

}

Figures*  RotateSq::Rotate()
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

RotateSq::~RotateSq()
{
}
