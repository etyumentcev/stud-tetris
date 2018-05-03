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

		std::this_thread::sleep_for(std::chrono::milliseconds(40));
		Tick();
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
		if (Button == 77)
		{
			Current_Figure->MoveRight();
		}
		else
		{
			if (Button == 75)
			{
				Current_Figure->Rotate();
			}
		}
	};
	//Отрисовка поля
	field->Draw(Counter);

	//Отрисовка фигуры
	Current_Figure->Draw();
	
	Check_Field();

}


int Game::Read_Game_Button()
{
	if (_kbhit()) {
		return _getch();
	}
	return 0;
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
	for (int i = field->cells.size() - 1; i >= 0; i--)
	{
		while (Check_Line(i))
		{
			field->ClearLine(i);
			field->MoveCellsDown(i);
			Counter++;
		}
	}
}

Game::~Game()
{
}
