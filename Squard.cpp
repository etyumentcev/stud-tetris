
#include <iostream> 
#include "Squard.h"



	Squard::Squard(Field *field) : Figures(field)
	{
		Cell *cell1 = new Cell(_field);
		cell1->x = field->width / 2;
		cell1->y = 0;
		cells.push_back(cell1);

		Cell *cell2 = new Cell(_field);
		cell2->x = field->width / 2;
		cell2->y = 1;
		cells.push_back(cell2);

		Cell *cell3 = new Cell(_field);
		cell3->x = field->width / 2 + 1;
		cell3->y = 0;
		cells.push_back(cell3);

		Cell *cell4 = new Cell(_field);
		cell4->x = field->width / 2 + 1;
		cell4->y = 1;
		cells.push_back(cell4);
	}

