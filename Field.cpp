#include "stdafx.h"
#include <iostream> 
#include"Figures.h"
#include "Cell.h"
#include "Field.h"

using namespace std;

Field::Field(int newWidth, int newHeight) :
	width(newWidth), height(newHeight)
{
	//Проходимся по строкам		
	for (int j = 0; j < height; j++) {
		vector<Cell*> cellLine;

		//Проходимся по ячейкам в строке
		for (int i = 0; i < width; i++) {
			//Добавляем ячейки в строку
			cellLine.push_back(nullptr);
		}
		//Добавляем новую строку в матрицу
		cells.push_back(cellLine);
	}
}


void Field::Draw()
		{
	
			system("cls");
			for (int i = 0; i < width; i++)
			{
				cout << "*";
			}
			cout << endl;

			for (int i = 0; i < height; i++)
			{
				for (int j = 0; j < width; j++)
				{
					if (j==0||j==width-1)
						cout << "*";
					else 
					{
						cout << " ";
					}
				}
				cout << endl;
				}
			
			for (int i = 0; i < width; i++)
			{
				cout << "*";
			}
			cout << endl;

		}
	

	bool Field::CheckCell(int x, int y)
	{
		if ((x < 0) && (x >= width)) {
			return false;
		}

		if ((y < 0) && (y >= height)) {
			return false;
		}

		return cells[y][x]!=nullptr;
	}


	void Field::Create_Line_Top()
	{
		vector<Cell*> cellLine;
		for (int i = 0; i < width; i++)
		{
			cellLine.push_back(nullptr);
		}
		cells.insert(cells.begin(), cellLine);
	}
