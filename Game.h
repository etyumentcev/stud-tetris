#ifndef _GAME_H
#define _GAME_H

#include "Field.h"
#include "Figures.h"


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
	void Random();
	//Процедура убирает заполненные строки
	void Check_Field();
	bool Check_Line(int row);
	void Create_New_Figure();
	Figures *Current_Figure;
	bool Is_Time_To_Move_Down();
	void Game_Over();
	void Escape();
	~Game();
};

#endif