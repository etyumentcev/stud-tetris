#ifndef FIELD_H   
#define FIELD_H  

#include <vector>
#include "Cell.h"

using namespace std;

class Field
{
public:
	Field(int newWidth, int newHeight);
	int width;
	int	height;
	void DrawCells();
	bool CheckCell(int x, int y);
	void Draw(int Points);
	//двигаем €чейки вниз, которые наход€тс€ выше указанной строки
	void MoveCellsDown(int row);
	void ClearLine(int row);
	bool IsFull();
	//ћатрица указателей на €чееки
	//если €чейка пуста, в ней записан null_ptr
	//ј если не пуста, то содержит указатель на €чейку
	vector<vector<Cell*>> cells;
	
};


#endif