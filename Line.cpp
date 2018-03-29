#include "stdafx.h"
#include <iostream> 
#include "Figures.h"


using namespace std;



class Line : public Figures
{
public:
	

	Line() :
		hight(1),
		width(4)
	{

	}

	void DrawLine()                                   
	{
		
		for (int i = 0; i < hight; i++)
		{
			for (int j = 0; j < width; j++)
			{
				cout << "#";
			}
		}
		cout << endl;
	}
	
	};



		