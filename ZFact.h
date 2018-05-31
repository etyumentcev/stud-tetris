#ifndef ZFACT_H_
#define ZFACT_H_

#include "Figures.h"
#include "Factory.h"
#include "Z-figure.h"

class ZFact : public Factory
{
public:
	ZFact();

	Figures* CreateFactFig(Field*field);

	~ZFact();
};

#endif