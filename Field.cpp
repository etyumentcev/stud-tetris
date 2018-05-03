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

void Field::MoveCellsDown(int row)
{
	for (int j = 0; j < row; j++) {
		//Проходимся по ячейкам в строке
		for (int i = 0; i < cells[j].size(); i++) {
			//Добавляем ячейки в строку
			if (cells[j][i] != nullptr)
			{
				cells[j][i]->y++;
				cells[j + 1][i] = cells[j][i];
				cells[j][i] = nullptr;
			}
		}
	}
}

void Field::ClearLine(int row)
{
	for (int i = 0; i < cells[row].size(); i++) {
		//Добавляем ячейки в строку
		if (cells[row][i] != nullptr)
		{
			delete cells[row][i];
			cells[row][i] = nullptr;
		}
	}
}

void Field::DrawCells()
{
	for (int j = 0; j < height; j++) {
		//Проходимся по ячейкам в строке
		for (int i = 0; i < width; i++) {
			//Добавляем ячейки в строку
			if (cells[j][i] != nullptr)
			{
				cells[j][i]->Draw();
			}
		}
	}
}

void Field::Draw(int Points)
{

	COORD coord;
	coord.X = 0;
	coord.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	for (int i = 0; i < width + 2; i++)
	{
		cout << "*";
	}

	cout << "  points: " << Points << endl;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width + 2; j++)
		{
			if (j == 0 || j == width + 1)
				cout << "*";
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	for (int i = 0; i < width + 2; i++)
	{
		cout << "*";
	}
	DrawCells();
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


	/*void Field::Create_Line_Top()
	{
		vector<Cell*> cellLine;
		for (int i = 0; i < width; i++)
		{
			cellLine.push_back(nullptr);
		}
		cells.insert(cells.begin(), cellLine);
	}*/
