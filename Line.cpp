#include "stdafx.h"
#include <iostream> 
#include <conio.h>
#include "Figures.h"


using namespace std;



class Line : public Figures
{
public:
	int height;
		int width;

	Line() :
		 height(1),
		 width(4)
	{

	}

	bool SetCursorPos()
	{

	}

	void DrawLine()                                   
	{
		
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				cout << "#";
			}
		}
		cout << endl;
	}
	
	};

	int main()
	{
		Line Show;
		Show.Draw();
	_getch();
	 return 0;
}


		