#include "LineFact.h"


LineFact::LineFact()
{
}

Figures* LineFact::CreateFactFig(Field*field)
{
	return new Line(field);
}


LineFact::~LineFact()
{
}
