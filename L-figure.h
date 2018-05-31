#ifndef LFIGURE_H   
#define LFIGURE_H
#include "Figures.h"


class Lfigure : public Figures
{
public:
	
	Lfigure(Field *field);
};



class LfigureR : public Figures
{
public:

	LfigureR(Field *field);

};


class LfigureD : public Figures
{
public:

	LfigureD(Field *field);
};



class LfigureL : public Figures
{
public:

	LfigureL(Field *field);
};
#endif