#ifndef FIGURES_H   
#define FIGURES_H  


using namespace std;




class Figures
{
public:

	virtual void Draw() = 0;
	virtual void MoveDown()=0;
	virtual void MoveRight()=0;
	virtual void MoveLeft()=0;
	virtual void Rotate()=0;

	int x;
	int y;
	int height;
	int width;
};

#endif