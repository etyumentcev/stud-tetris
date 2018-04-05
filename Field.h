#ifndef FIELD_H   
#define FIELD_H  
#include "Figures.h"


class Field : public Figures
{
public:
	int width=100;
	int	height=50;
	bool CheckCell(int x, int y);

};
#endif
