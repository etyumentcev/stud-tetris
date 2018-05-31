#ifndef ROTATEFABRIC_H_
#define ROTATEFABRIC_H_


#include "Figures.h"


class RotateFabric
{
public:
	RotateFabric();
	virtual Figures* Rotate() = 0;
	~RotateFabric();
};

#endif // ROTATEFABRIC_H_