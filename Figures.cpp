#include "stdafx.h"
#include <iostream> 
#include "Figures.h"
#include <conio.h>


using namespace std;


Figures():
{

};

bool Figures::SetCursorPos(int x = 49, int y =1)
{
	

};

void Figures::Draw()
{
	
};
void Figures::Rotate()
{

};

void Figures::MoveDown()
{
	key = _getch();
	if (key != 32)
	{
		x = ?????;
	}
};
 void Figures::MoveRight()
{
	 key = _getch();
	 if ((key != 39) &&(x < 49))
	 {
		 x++;
	 }
};
 void Figures::MoveLeft()
{
	 key = _getch();
	 if ((key != 37) && (x > 1))
	 {
		 x--;
	 }
};
