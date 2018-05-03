#ifndef FIGURES_H   
#define FIGURES_H  
#include "Field.h"

using namespace std;




class Figures
{
public:

	Figures(Field *field);

	int height;
	int width;
	virtual void Draw();
	virtual void MoveDown();
	virtual void MoveRight();
	virtual void MoveLeft();
	virtual void Rotate();
	vector<Cell*> cells;
protected:
	Field *_field;
	
};

#endif