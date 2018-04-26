#include "stdafx.h"
#include "Game.h"
#include"Field.h"
#include<conio.h>

Game::Game()
{
}

void Game::New_Game()
{
	field = new Field(100, 50);
	while (true)
	{
		// подумать как сделать привязку бесконечного цикла ко времени
	}
}

void Game::Tick()
{
	//Обработка нажатия клавиш
	char Button = Read_Game_Button();
	if (Button == 37)
	{
		Current_Figure->MoveLeft();
	} 
	else {
		if (Button == 39)
		{
			Current_Figure->MoveRight();
		}
		else
		{
			if (Button == 37)
			{
				Current_Figure->Rotate();
			}
		}
	};
	//Отрисовка поля
	field->Draw();

	//Отрисовка фигуры
	Current_Figure->Draw();
	
	Check_Field();

}


char Game::Read_Game_Button()
{

	return getch();
}

bool Game::Check_Line(int row)
{
	for (int i = 0; i < field->cells[row].size(); i++)
	{
		if (field->cells[row][i] == nullptr)
		{
			return false;
		}
	}
	return true;
}


void Game::Check_Field()
{
	for (int i = 0; i < field->cells.size(); i++)
	{
		if (Check_Line(i))
		{
			field->cells.erase(field->cells.begin() + i);
			field->Create_Line_Top();
		}
	}
}

Game::~Game()
{
}
