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


	// �������� ��� ������ ������ �����
	for (int i = 0; i < cells.size(); i++)
	{
		cells[i]->x -= 1;
	}

};


void Figures::MoveRight()
{

	// �������� ��� ������ ������ ������
	for (int i = 0; i < cells.size(); i++)
	{
		cells[i]->x += 1;
	}

};


void Figures::MoveDown()
{

	// �������� ��� ������ ������ ����
	for (int i = 0; i < cells.size(); i++)
	{
		cells[i]->y += 1;
	}
};


void Figures::Stop()
{
	//������� ����� ������ � ������ ����
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
		//���������� � ������, ����� �� ��� ����������
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


		//���� �� �����, �� ������� �� ��������� � �������, ��� �� ����� ����������
		if (!canMove) {
			return false;
		}
	}

	//��� ������ ����� ���������� ������
	return true;
}