#include "TFact.h"


TFact::TFact()
{
}

Figures* TFact::CreateFactFig(Field*field)
{
	return new Tfigure(field);
}

TFact::~TFact()
{
}
