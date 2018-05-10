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
	void Create_New_Figure();
	Figures *Current_Figure;
	bool Is_Time_To_Move_Down();
	~Game();
};        

#endif