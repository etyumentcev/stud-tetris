#include "stdafx.h"
#include <iostream> 
#include "Figures.h"
using namespace std;


class Zfigure : public Figures
{
public:

	

	Zfigure() :
		height(2),
		width(3)
	{

	}

	bool SetCursorPos()
	{

	}

	void Draw()
	{
		for (int i = 0; i < width-1; i++)
		{			
				cout << "#";
			}
		
		cout << endl;

		for (int i = 0; i < height-1; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (j == 0 )
					cout << " ";
				else
				{
					cout << "#";
				}
			}
			
		}

		cout << endl;
	};
};

