#include "stdafx.h"
#include "ZFact.h"


ZFact::ZFact()
{
}

Figures* ZFact::CreateFactFig(Field*field)
{
	return new Zfigure(field);
}

ZFact::~ZFact()
{
}
