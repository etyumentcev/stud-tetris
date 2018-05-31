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
	
protected:
	Field *_field;
};




#endif
