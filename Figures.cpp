#include "stdafx.h"
#include <iostream> 
#include <windows.h>

using namespace std;

struct Cells
{
	int h = 5;
	int w = 5;
};

class Figures
{
public:

	int x, y;
	Cells**arrayofcells;
	int cell_quantity_in_long;
	int cell_quantity_in_weird;
	int cells_size;
	HWND m_ConsoleWindow;
	HDC m_hDC;

	Figures()
	{
		x = 50;
		y = 10;
		int j = cell_quantity_in_weird;
		arrayofcells = new Cells*[j];                                           //�������� ����� ����� ������ ��� ����������� � ������ ������
		for (int i = 0; i < cell_quantity_in_long; ++i)
		{
			arrayofcells = new Cells*[];
		}
	}



	virtual void Draw()
	{
		for (int i = 0; i < cell_quantity_in_long; ++i)
		{

			for (int j = 0; j < cell_quantity_in_weird; ++j)
			{
				Rectangle(m_hDC, x + j*cells_size, y + i*cells_size, x + j*cells_size + cells_size, y + i*cells_size + cells_size);
			}
			//����� ��������� ���������
		}
	}
	virtual void Falling()                                              // ��������� �� ����������� x
	{

	}

	virtual void Left_Right()                                                   // ��������� �� ����������� y
	{

	}
};