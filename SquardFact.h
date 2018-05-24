#ifndef SQUARDFACT_H_
#define SQUARDFACT_H_

#include "Figures.h"
#include "Factory.h"
#include "Squard.h"


class SquardFact: public Factory
{
public:
	SquardFact();

	Figures* CreateFactFig(Field*field);

	~SquardFact();
};

#endif