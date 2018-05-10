#ifndef CELL_H   
#define CELL_H 

class Field;

class Cell
{
public:
	Cell(Field *field);
	int x;
	int y;
	virtual void Draw();
	~Cell();
	bool CanMoveRight();
	bool CanMoveLeft();
	bool CanMoveDown();
	bool filled = false;
protected:
	Field *_field;
};


//class RedCell : public Cell
//{
//public:
//	RedCell(Field *field) : Cell(field) {
//
//	}
//
//	 void Draw() override;
//};

#endif
