#include "FactMap.h"


FactMap::FactMap()
{
	creator.emplace(0, new LFact());
	creator.emplace(1, new LineFact());
	creator.emplace(2, new SquardFact());
	creator.emplace(3, new TFact());
	creator.emplace(4, new ZFact());
}


FactMap::~FactMap()
{
}
