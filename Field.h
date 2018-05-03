#ifndef FIELD_H   
#define FIELD_H  
#include "Figures.h"
#include<vector>
#include"Cell.h"


class Field : public Figures
{
public:
	Field(int newWidth, int newHeight);
	int width;
	int	height;
	bool CheckCell(int x, int y);
	void Draw(int Points);
	//void Create_Line_Top();
	void MoveCellsDown(int row);
	void ClearLine(int row);
	void DrawCells();

	vector<vector<Cell*>> cells;

};
#endif
