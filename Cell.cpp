#include "stdafx.h"
#include <iostream>
#include "Cell.h"
#include <Windows.h>
#include "Field.h"

using namespace std;

Cell::Cell(Field *field):_field(field)
{
}

void Cell::Draw()
{
	COORD coord;
	coord.X = x + 1;
	coord.Y = y + 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << "#";
}
	

bool Cell::CanMoveRight()
{
	if ((x + 1) >= _field->width)
	{
		return false;
	}
	if (_field->cells[y][x + 1] != nullptr)
	{
		return false;
	}
	
	return true;
}

bool Cell::CanMoveLeft()
{
	if (x==0)
	{ 
		return false;
	}

	if (_field->cells[y][x - 1] != nullptr)
	{
		return false;
	}

	return true;
}

bool Cell::CanMoveDown()
{
	if ((y + 1) >= _field->height)
	{
		return false;
	}
	if (_field->cells[y+1][x] != nullptr)
	{
		return false;
	}

	return true;
}


Cell::~Cell()
{
}


