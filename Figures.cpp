#include "stdafx.h"
#include <iostream> 
#include "Figures.h"
#include <conio.h>


using namespace std;



Figures::Figures(Field *field) : _field(field)
{

}

void Figures::Draw()
{
	for (int i = 0; i < cells.size(); i++)
	{
		cells[i]->Draw();
	}
	
};
void Figures::Rotate()
{
	

};

void Figures::MoveDown()
{
	
};
 void Figures::MoveRight()
{
	
};
 void Figures::MoveLeft()
{
	
};
