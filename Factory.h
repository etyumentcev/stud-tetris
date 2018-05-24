#ifndef FACTORY_H   
#define FACTORY_H 

#include "Figures.h"
#include "Field.h"
#include <map>
//#include"LFact.h"
//#include"LineFact.h"
//#include"SquardFact.h"
//#include"TFact.h"
//#include"ZFact.h"

class Factory
{
public:
	Factory();
	
	
	virtual Figures* CreateFactFig(Field*field)=0;

	/*map <int, Factory*>creator = {
		{0,LFact},
		{1,LineFact},
		{2,SquardFact},
		{3,TFact},
		{4,ZFact}
	};*/

	
	virtual ~Factory();
};

#endif