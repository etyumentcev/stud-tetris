#include "stdafx.h"
#include <iostream> 
#include "Figures.h"
using namespace std;

class Lfigure : public Figures
{
public:
	

	Lfigure() :
		hight(2),
		width(3)
	{

	}

	void Draw()
	{
		for (int i = 0; i < width; i++)
		{
			cout << "#";
		}

		cout << endl;

		for (int i = 0; i < hight - 1; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (j == 2)
					cout << "#";
				else
				{
					cout << " ";
				}
			}

		}

		cout << endl;
	};
};
