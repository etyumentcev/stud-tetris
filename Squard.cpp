#include "stdafx.h"
#include <iostream> 
#include <windows.h>

using namespace std;


struct Cells
{
	int h = 5;
	int w = 5;
};

class Squard
{
public:

	int x, y;
	Cells**arrayofcells;
	int cell_quantity_in_long;
	int cell_quantity_in_weird;
	int cells_size;
	HWND m_ConsoleWindow;
	HDC m_hDC;

	Squard() :

		m_ConsoleWindow(GetConsoleWindow()),
		m_hDC(GetDC(m_ConsoleWindow)),
		x(25),
		y(10),
		cell_quantity_in_long(2),
		cell_quantity_in_weird(2),
		arrayofcells(0),
		cells_size(25)


	{
		arrayofcells = new Cells*[cell_quantity_in_long];
		for (int i = 0; i < cell_quantity_in_weird; i++)
			arrayofcells[i] = new Cells;

	}

	~Squard()                                         
	{
		for (int i = 0; i < cell_quantity_in_weird; i++)
			delete[] arrayofcells[i];
		delete[] arrayofcells;
	}

	void DrawSquard()                                   
	{

		for (int i = 0; i < cell_quantity_in_long; i++)
		{
			for (int j = 0; j < cell_quantity_in_weird; j++)
			{

				SelectObject(m_hDC, CreateSolidBrush(RGB(255, 255, 0)));

				Rectangle(m_hDC, x + j*cells_size, y + i*cells_size, x + j*cells_size + cells_size, y + i*cells_size + cells_size);

			}


		};
	};
};


