#include "Game.h"
#include <chrono>
#include <thread>
#include <time.h>
#include <conio.h>
#include "L-figure.h"
#include "T-figure.h"
#include "Z-figure.h"
#include "Line.h"
#include "Squard.h"


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
		/*else
		{
			if (Button == 75)
			{
				Current_Figure->Rotate();
			}
		}*/
	};
	//Отрисовка поля
	field->Draw(Counter);

	//Отрисовка фигуры
	Current_Figure->Draw();
	


	bool Time_To_Move_Down = Is_Time_To_Move_Down();
	if (Time_To_Move_Down) {
		if (Current_Figure->CanMove()) {
			Current_Figure->MoveDown();
		}
		else {
			Create_New_Figure();
		}
	}

	Check_Field();
}


int Game::Read_Game_Button()
{
	if (_kbhit()) {
		return _getch();
	}
	return 0;
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

	int r = (rand() % 5);
	if (r = 0)
	{
		Current_Figure = new Squard(field);
	}

	if (r = 1)
	{
		Current_Figure = new Line(field);
	}

	if (r = 2)
	{
		Current_Figure = new Lfigure(field);
	}

	if (r = 3)
	{
		Current_Figure = new Tfigure(field);
	}

	if (r = 4)
	{
		Current_Figure = new Zfigure(field);
	}

}


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
