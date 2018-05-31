#ifndef TFACT_H_
#define TFACT_H_

#include "Figures.h"
#include "Factory.h"
#include "T-figure.h"

class TFact
{
public:
	TFact();

	Figures* CreateFactFig(Field*field);

	~TFact();
};

#endif