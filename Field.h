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
	//������� ������ ����, ������� ��������� ���� ��������� ������
	void MoveCellsDown(int row);
	void ClearLine(int row);
	bool IsFull();
	//������� ���������� �� ������
	//���� ������ �����, � ��� ������� null_ptr
	//� ���� �� �����, �� �������� ��������� �� ������
	vector<vector<Cell*>> cells;
	
};


#endif