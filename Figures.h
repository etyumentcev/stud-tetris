#ifndef FIGURES_H  

#define FIGURES_H  

#include "Field.h"


using namespace std;


class Figures
{
public:
	Figures(Field *field);
	
	virtual void Draw();
	virtual void MoveDown();
	virtual bool CanMoveDown();
	virtual bool CanMoveRigt();
	virtual bool CanMoveLeft();
	virtual void MoveRight();
	virtual void MoveLeft();
	int directoin;
	virtual bool CanRotateRight();
	virtual bool CanRotateDown();
	virtual bool CanRotateLeft();
	virtual bool CanRotateUp();
	virtual void TakeCoord();
	int CoordX;
	int CoordY;
	
	void Stop();//ƒействие, которое выполн€етс€ при остановке фигуры
	int x;
	int y;
	
	vector<Cell*> cells;
protected:

	Field *_field;
};

#endif