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
	virtual void Random(int r);
	virtual void MoveRight();
	virtual void MoveLeft();
	Figures*RCurrent_Figure;
	/*virtual void Rotate(int direction);*/
	/*virtual void RotateRight()=0;
	virtual void RotateLeft()=0;
	virtual void RotateDown()=0;
	virtual void RotateUp()=0;
	*/
	
	void Stop();//ƒействие, которое выполн€етс€ при остановке фигуры
	int x;
	int y;
	
	vector<Cell*> cells;
protected:

	Field *_field;
};

#endif