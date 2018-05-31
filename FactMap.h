#ifndef FACTMAP_H_
#define FACTMAP_H_

#include"Factory.h"
#include <map>
#include"LFact.h"
#include"LineFact.h"
#include"SquardFact.h"
#include"TFact.h"
#include"ZFact.h"

class FactMap
{
public:
	FactMap();
	map <int, Factory*>creator;
	~FactMap();
};
#endif
