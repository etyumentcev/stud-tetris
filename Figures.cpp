#include "stdafx.h"
#include <iostream> 
#include <conio.h>
#include "Figures.h"
#include "Field.h"


using namespace std;



Figures::Figures(Field *field): _field(field)
{
	
}



//Отрисовка всех клеточек фигуры
void Figures::Draw()
{
	for (size_t i = 0; i < cells.size(); i++)
	{	
			cells[i]->Draw();
	}
}

bool Figures::CanMoveDown()
{
	for (size_t i = 0; i < cells.size(); i++)
	{
		bool canMove = false;
		//Спрашиваем у ячейки, может ли она сдвинуться

		canMove = cells[i]->CanMoveDown();

		//Если не может, то выходим из процедуры и говорим, что не можем сдвинуться
		if (!canMove) {
			return false;
		}
	}

	//Все ячейки могут сдвинуться вниз
	return true;
}

bool Figures::CanMoveRigt()
{
	for (size_t i = 0; i < cells.size(); i++)
	{
		bool canMove = false;

		canMove = cells[i]->CanMoveRight();


		//Если не может, то выходим из процедуры и говорим, что не можем сдвинуться
		if (!canMove) {
			return false;
		}
	}

	//Все ячейки могут сдвинуться вправо
	return true;
}

bool Figures::CanMoveLeft()
{
	for (size_t i = 0; i < cells.size(); i++)
	{
		bool canMove = false;
		//Спрашиваем у ячейки, может ли она сдвинуться

		canMove = cells[i]->CanMoveLeft();

		//Если не может, то выходим из процедуры и говорим, что не можем сдвинуться
		if (!canMove) {
			return false;
		}
	}

	//Все ячейки могут сдвинуться влево
	return true;
}


void Figures::MoveDown()
{
	if (CanMoveDown())
	{
		// Сдвигаем все клетки фигуры вниз
		for (size_t i = 0; i < cells.size(); i++)
		{
			cells[i]->y += 1;
		}
	}
}

void Figures::MoveRight()
{
	if (CanMoveRigt())
	{
		// Сдвигаем все клетки фигуры вправо
		for (size_t i = 0; i < cells.size(); i++)
		{
			cells[i]->x += 1;
		}
	}
}

void Figures::MoveLeft()
{
	if (CanMoveLeft())
	{
		// Сдвигаем все клетки фигуры влево
		for (size_t i = 0; i < cells.size(); i++)
		{
			cells[i]->x -= 1;
		}
	}
}

void Figures::Stop()
{
	//Перенос ячеек фигуры в ячейки поля
	for (size_t i = 0; i < cells.size(); i++)
	{
		int cellX = cells[i]->x;
		int cellY = cells[i]->y;
		_field->cells[cellY][cellX] = cells[i];
	}
}

void Figures::TakeCoord()
{
	for (size_t i = 0; i < cells.size(); i++)
	{
		CoordX = cells[i]->x;
		CoordY = cells[i]->y;
	
	}
}

bool Figures::CanRotateRight()
{
	for (size_t i = 0; i < cells.size(); i++)
	{
		bool canRotate = false;
		//Спрашиваем у ячейки, может ли она сдвинуться

		canRotate = cells[i]->CanRotateRight(CoordX, CoordY);

		//Если не может, то выходим из процедуры и говорим, что не можем сдвинуться
		if (!canRotate) {
			return false;
		}
	}

	return true;
	
}

bool Figures::CanRotateDown()
{
	for (size_t i = 0; i < cells.size(); i++)
	{
		bool canRotate = false;
		//Спрашиваем у ячейки, может ли она сдвинуться

		canRotate = cells[i]->CanRotateDown(CoordX, CoordY);

		//Если не может, то выходим из процедуры и говорим, что не можем сдвинуться
		if (!canRotate) {
			return false;
		}
	}

	return true;
}

bool Figures::CanRotateLeft()
{
	for (size_t i = 0; i < cells.size(); i++)
	{
		bool canRotate = false;
		//Спрашиваем у ячейки, может ли она сдвинуться

		canRotate = cells[i]->CanRotateLeft(CoordX, CoordY);

		//Если не может, то выходим из процедуры и говорим, что не можем сдвинуться
		if (!canRotate) {
			return false;
		}
	}

	return true;
}

bool Figures::CanRotateUp()
{
	for (size_t i = 0; i < cells.size(); i++)
	{
		bool canRotate = false;
		//Спрашиваем у ячейки, может ли она сдвинуться

		canRotate = cells[i]->CanRotateUp(CoordX, CoordY);

		//Если не может, то выходим из процедуры и говорим, что не можем сдвинуться
		if (!canRotate) {
			return false;
		}
	}

	return true;
}