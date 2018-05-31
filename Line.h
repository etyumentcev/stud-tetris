#ifndef LINE_H   
#define LINE_H
#include "Figures.h"






class Line : public Figures
{
public:
		
	Line(Field *field);
			
};

class LineRight : public Figures
{
public:

	LineRight(Field *field);

};


class LineDown : public Figures
{
public:

	LineDown(Field *field);

};


class LineLeft : public Figures
{
public:

	LineLeft(Field *field);

};

#endif

		