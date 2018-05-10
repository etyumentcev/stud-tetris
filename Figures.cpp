#include "stdafx.h"
#include <iostream> 
#include <conio.h>
#include "Figures.h"
#include "Field.h"


using namespace std;



Figures::Figures(Field *field) : _field(field)
{

}

void Figures::Draw()
{
	for (int i = 0; i < cells.size(); i++)
	{
		cells[i]->Draw();
	}
	
};
//void Figures::Rotate()
//{
	

//};

void Figures::MoveLeft()
{


	// —двигаем все клетки фигуры влево
	for (int i = 0; i < cells.size(); i++)
	{
		cells[i]->x -= 1;
	}

};


void Figures::MoveRight()
{

	// —двигаем все клетки фигуры вправо
	for (int i = 0; i < cells.size(); i++)
	{
		cells[i]->x += 1;
	}

};


void Figures::MoveDown()
{

	// —двигаем все клетки фигуры вниз
	for (int i = 0; i < cells.size(); i++)
	{
		cells[i]->y += 1;
	}
};


void Figures::Stop()
{
	//ѕеренос €чеек фигуры в €чейки пол€
	for (int i = 0; i < cells.size(); i++)
	{
		int cellX = cells[i]->x;
		int cellY = cells[i]->y;
		_field->cells[cellY][cellX] = cells[i];
	}
};



bool Figures::CanMove()
{
	for (int i = 0; i < cells.size(); i++)
	{
		bool canMove = false;
		//—прашиваем у €чейки, может ли она сдвинутьс€
		if (canMove = cells[i]->CanMoveRight)
		{
			return true;
		};

		if (canMove = cells[i]->CanMoveLeft)
		{
			return true;
		};

		if (canMove = cells[i]->CanMoveDown)
		{
			return true;
		};


		//≈сли не может, то выходим из процедуры и говорим, что не можем сдвинутьс€
		if (!canMove) {
			return false;
		}
	}

	//¬се €чейки могут сдвинутьс€ вправо
	return true;
}