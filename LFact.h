#ifndef LFACT_H_
#define LFACT_H_

#include "Figures.h"
#include "Factory.h"
#include "L-figure.h"


class LFact : public Factory
{
public:
	LFact();

	Figures* CreateFactFig(Field*field);

	~LFact();
};

#endif 
