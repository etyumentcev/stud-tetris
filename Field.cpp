#include "stdafx.h"
#include <iostream> 
#include"Figures.h"
#include "Cell.h"
#include "Field.h"

using namespace std;

Field::Field(int newWidth, int newHeight) :
	width(newWidth), height(newHeight)
{
	for (int j = 0; j < height; j++) {
		for (int i = 0; i < width; i++) {
			cells[j].push_back(nullptr);
		}
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

