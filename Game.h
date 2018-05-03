#ifndef GAME_H   
#define GAME_H  

#include "Field.h"
#include "Figures.h"

class Game
{
public:
	Game();
	Field *field;
	void Tick();
	int Read_Game_Button();
	void New_Game();
	int Counter = 0;
	void Check_Field();
	bool Check_Line(int row);
	Figures *Create_New_Figure();
	Figures *Current_Figure;
	~Game();
};

#endif