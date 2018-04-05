#include "stdafx.h"
#include <iostream> 
#include "Figures.h"


using namespace std;




class Squard : public Figures
{
public:
	
	Squard() :
		height(2),
		width(2)
	{

	}

	bool SetCursorPos()
	{

	}

	void Draw()                                   
	{
		
		for (int i = 0; i < height; i++)
		{
			
				cout << "#";
			
		}
		cout << endl;

		for (int i = 0; i <width; i++)
		{

			cout << "#";

		}
		cout << endl;
	}

};


