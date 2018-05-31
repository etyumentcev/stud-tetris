#ifndef _GAME_H
#define _GAME_H

#include "Field.h"
#include "Figures.h"
#include "Factory.h"
#include "FactMap.h"
#include "RotateFabric.h"
#include"RotateMap.h"






class Game
{
public:
	Field *field;
	Game();
	void Tick();
	int Read_Game_Button();
	void New_Game();
	int Counter = 0;
	//Процедура убирает заполненные строки
	void Check_Field();
	bool Check_Line(int row);
	void Create_New_Figure();
	Figures *Current_Figure;
	void CreateRandomFig();
	bool Is_Time_To_Move_Down();
	void Game_Change_Figure_Direction();
	//void Game_Can_Change_Direction();
	void Game_Over();
	void Escape();
	RotateMap rt;
	FactMap pt;
	int a = rand() % 5;

	~Game();
};

#endif