#include "stdafx.h"
#include <iostream> 
#include <conio.h>
#include "Figures.h"
#include "Field.h"


using namespace std;



Figures::Figures(Field *field): _field(field)
{
	
}



//��������� ���� �������� ������
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
		//���������� � ������, ����� �� ��� ����������

		canMove = cells[i]->CanMoveDown();

		//���� �� �����, �� ������� �� ��������� � �������, ��� �� ����� ����������
		if (!canMove) {
			return false;
		}
	}

	//��� ������ ����� ���������� ����
	return true;
}

bool Figures::CanMoveRigt()
{
	for (size_t i = 0; i < cells.size(); i++)
	{
		bool canMove = false;

		canMove = cells[i]->CanMoveRight();


		//���� �� �����, �� ������� �� ��������� � �������, ��� �� ����� ����������
		if (!canMove) {
			return false;
		}
	}

	//��� ������ ����� ���������� ������
	return true;
}

bool Figures::CanMoveLeft()
{
	for (size_t i = 0; i < cells.size(); i++)
	{
		bool canMove = false;
		//���������� � ������, ����� �� ��� ����������

		canMove = cells[i]->CanMoveLeft();

		//���� �� �����, �� ������� �� ��������� � �������, ��� �� ����� ����������
		if (!canMove) {
			return false;
		}
	}

	//��� ������ ����� ���������� �����
	return true;
}


void Figures::MoveDown()
{
	if (CanMoveDown())
	{
		// �������� ��� ������ ������ ����
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
		// �������� ��� ������ ������ ������
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
		// �������� ��� ������ ������ �����
		for (size_t i = 0; i < cells.size(); i++)
		{
			cells[i]->x -= 1;
		}
	}
}

void Figures::Stop()
{
	//������� ����� ������ � ������ ����
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
		//���������� � ������, ����� �� ��� ����������

		canRotate = cells[i]->CanRotateRight(CoordX, CoordY);

		//���� �� �����, �� ������� �� ��������� � �������, ��� �� ����� ����������
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
		//���������� � ������, ����� �� ��� ����������

		canRotate = cells[i]->CanRotateDown(CoordX, CoordY);

		//���� �� �����, �� ������� �� ��������� � �������, ��� �� ����� ����������
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
		//���������� � ������, ����� �� ��� ����������

		canRotate = cells[i]->CanRotateLeft(CoordX, CoordY);

		//���� �� �����, �� ������� �� ��������� � �������, ��� �� ����� ����������
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
		//���������� � ������, ����� �� ��� ����������

		canRotate = cells[i]->CanRotateUp(CoordX, CoordY);

		//���� �� �����, �� ������� �� ��������� � �������, ��� �� ����� ����������
		if (!canRotate) {
			return false;
		}
	}

	return true;
}