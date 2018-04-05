#ifndef FIGURES_H   
#define FIGURES_H  


using namespace std;
using namespace System;



class Figures
{
public:
	int height;
	int width;
	int key ;
	virtual bool SetCursorPos(int x, int y)=0;
	virtual void Draw() = 0;
	virtual void MoveDown()=0;
	virtual void MoveRight()=0;
	virtual void MoveLeft()=0;
	virtual void Rotate()=0;

	
};

#endif