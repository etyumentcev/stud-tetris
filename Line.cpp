//#include "stdafx.h"
#include <iostream> 
#include"Line.h"


using namespace std;



	Line::Line(Field *field) : BaseFigure(field)
	{
		Cell *cell1 = new RedCell(_field);
		cell1->x = field->width / 2 - 1;
		cell1->y = 0;
		cells.push_back(cell1);

		Cell *cell2 = new RedCell(_field);
		cell2->x = field->width / 2;
		cell2->y = 0;
		cells.push_back(cell2);

		Cell *cell3 = new RedCell(_field);
		cell3->x = field->width / 2 + 1;
		cell3->y = 0;
		cells.push_back(cell3);

		Cell *cell4 = new RedCell(_field);
		cell4->x = field->width / 2 + 2;
		cell4->y = 0;
		cells.push_back(cell4);
	}


