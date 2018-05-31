#include "stdafx.h"
#include "LFact.h"



LFact::LFact()
{
}

Figures* LFact::CreateFactFig(Field*field)
{
	return new Lfigure(field);
}


LFact::~LFact()
{
}
