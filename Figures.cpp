#include "stdafx.h"
#include <iostream> 
#include <conio.h>
#include "Figures.h"
#include "Field.h"


using namespace std;



Figures::Figures(Field *field): _field(field)
{
	
}

//void Figures::Random(int r)
//{
//	return *RCurrent_Figure;
//}

//void Figures::Rotate(int direction)
//{
//if (direction==1)
//{
//RotateRight();
//}
//else 
//{
//if (direction==2)
//{
//RotateDown();
//}
//
//else
//{
//if (direction==3)
//{
//RotateLeft();
//}
//else
//{
//if (direction==4)
//{
//RotateUp();
//}
//}
//}
//};



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
