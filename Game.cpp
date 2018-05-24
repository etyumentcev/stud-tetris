#include "Game.h"
#include<iostream>
#include <chrono>
#include <thread>
#include <time.h>
#include <conio.h>
#include "L-figure.h"
#include "T-figure.h"
#include "Z-figure.h"
#include "Line.h"
#include "Squard.h"


using namespace std;
using namespace std::chrono;

Game::Game()
{
}

void Game::New_Game()
{
	field = new Field(10, 6);
	Create_New_Figure();
	while (true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(40));
		Tick();
	}
}


void Game::Tick()
{
	//Обработка нажатия клавиш
	int Button = Read_Game_Button();
	if (Button == 75)
	{
		Current_Figure->MoveLeft();
	}
	else {
		if (Button == 77)
		{
			Current_Figure->MoveRight();
		}
		else {
		if (Button == 101)
		{
			Escape();
		}
		}
	}

	//Отрисовка поля
	field->Draw(Counter);

	//Отрисовка фигуры
	Current_Figure->Draw();

	//Если пришло время, то сдвигаем фигуру вниз
	bool Time_To_Move_Down = Is_Time_To_Move_Down();
	if (Time_To_Move_Down) {
		if (Current_Figure->CanMoveDown()) {
			Current_Figure->MoveDown();
		}
		else {
			Create_New_Figure();
		}
	} 


	//Проверка поля на заполненность линни и возможность движения фигуры вниз
	Check_Field(); 	
	Game_Over();
}

void Game::Create_New_Figure()
{
	//Удаляем старую фигуру если она существует
	if (Current_Figure != nullptr)
	{
		Current_Figure->Stop();
		delete Current_Figure;
	}
	//Создаем новую случайную фигуру

	

}

void Game::CreateRandomFig()
{
	int a;
	a = rand() % 5;
	Current_Figure= creator[a]->CreateFactFig(field);
}


//void Game::Random()
//{
//
//	int random = rand() % 5;
//
//	
//	if (random == 0)
//	{
//		Current_Figure = new Squard(field);
//	}
//
//
//	if (random == 1)
//	{
//		Current_Figure = new Line(field);
//	}
//
//	if (random == 2)
//	{
//		Current_Figure = new Lfigure(field);
//	}
//
//	if (random == 3)
//	{
//		Current_Figure = new Tfigure(field);
//	}
//
//	if (random == 4)
//	{
//		Current_Figure = new Zfigure(field);
//	}
//}



bool Game::Is_Time_To_Move_Down()
{
	struct tm mytm = { 0 };
	time_t result;
	
	result = time(0);
	static time_t lastTimeValue = -1;
	if (lastTimeValue != result) {
		lastTimeValue = result;
		return true;
	}
	return false;
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
	for (size_t i = 0; i < field->cells[row].size(); i++)
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
	for (int i = field->cells.size() -  1; i >=0; i--)
	{
		while (Check_Line(i))
		{
			field->ClearLine(i);
			field->MoveCellsDown(i);	
			Counter++;
		}
	}	
}

void Game::Game_Over()
{
	if (field->IsFull())
	{
		cout << "Game Over, press Enter";
		_getch();
		exit (0);
	}
}

void Game::Escape()
{
	
		cout << "Game Over, press Enter";
		_getch();
		exit(0);
	
}

Game::~Game()
{
}
