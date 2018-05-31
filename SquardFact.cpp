#include "stdafx.h"
#include "SquardFact.h"


SquardFact::SquardFact()
{
}

Figures* SquardFact::CreateFactFig(Field*field)
{
	return new Squard(field);
}

SquardFact::~SquardFact()
{
}
