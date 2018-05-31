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

bool Cell::CanRotateRight(int baseX, int baseY)
{
	int dx = baseX - x;
	int dy = baseY - y;
	int newX = x + dy;
	int newY = y - dx;

	if (newX < 0 || newY < 0)
	{
		return false;
	}

	if (newX >_field->width || newY >_field->height)
	{
		return false;
	}

	return true;

}

bool Cell::CanRotateDown(int baseX, int baseY)
{
	int dx = baseX - x;
	int dy = baseY - y;
	int newX = x + dy;
	int newY = y + dx;
	if (newX < 0 || newY < 0)
	{
		return false;
	}

	if (newX >_field->width || newY >_field->height)
	{
		return false;
	}

	return true;
}

bool Cell::CanRotateLeft(int baseX, int baseY)
{
	int dx = baseX - x;
	int dy = baseY - y;
	int newX = x - dy;
	int newY = y + dx;
	if (newX < 0 || newY < 0)
	{
		return false;
	}

	if (newX >_field->width || newY >_field->height)
	{
		return false;
	}

	return true;
}

bool Cell::CanRotateUp(int baseX, int baseY)
{
	int dx = baseX - x;
	int dy = baseY - y;

	int newX = x - dy;
	int newY = y - dx;


	if (newX < 0 || newY < 0)
	{
		return false;
	}

	if (newX >_field->width || newY >_field->height)
	{
		return false;
	}
	return true;
}

Cell::~Cell()
{
}


