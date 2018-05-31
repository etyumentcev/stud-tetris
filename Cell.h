#ifndef CELL_H   
#define CELL_H 



class Field;

class Cell
{
public:
	Cell(Field *field);
	int x=0;
	int y=0;
	virtual void Draw();
	~Cell();
	bool CanMoveRight();
	bool CanMoveLeft();
	bool CanMoveDown();
	bool filled = false;

	virtual bool CanRotateRight(int baseX, int baseY);
	virtual bool CanRotateDown(int baseX, int baseY);
	virtual bool CanRotateLeft(int baseX, int baseY);
	virtual bool CanRotateUp(int baseX, int baseY);
	
protected:
	Field *_field;
};




#endif
