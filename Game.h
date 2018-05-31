#ifndef _GAME_H
#define _GAME_H

#include "Field.h"
#include "Figures.h"
#include "Factory.h"
#include<map>
#include"LFact.h"
#include"LineFact.h"
#include"SquardFact.h"
#include"TFact.h"
#include"ZFact.h"


 //BUTTON_SPACE=	32


class Game
{
public:
	Field *field;
	Game();
	void Tick();
	int Read_Game_Button();
	void New_Game();
	int Counter = 0;
	/*void Random();*/
	//Процедура убирает заполненные строки
	void Check_Field();
	bool Check_Line(int row);
	void Create_New_Figure();
	Figures *Current_Figure;
	void CreateRandomFig();
	bool Is_Time_To_Move_Down();
	void Game_Over();
	void Escape();
	std::map <int, Factory*>creator = {
		{0,LFact()},
		{1,LineFact()},
		{2,SquardFact()},
		{3,TFact()},
		{4,ZFact()}
	};
	~Game();
};

#endif