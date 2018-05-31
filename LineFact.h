#ifndef LINEFACT_H_
#define LINEFACT_H_

#include "Figures.h"
#include "Factory.h"
#include "Line.h"

class LineFact : public Factory
{
public:
	LineFact();

	Figures* CreateFactFig(Field*field);

	~LineFact();
};

#endif