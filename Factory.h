#ifndef FACTORY_H   
#define FACTORY_H 

#include "Figures.h"
#include "Field.h"


class Factory
{
public:
	Factory();
	virtual Figures* CreateFactFig(Field*field)=0;
	virtual ~Factory();
};

#endif