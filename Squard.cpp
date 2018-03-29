#include "stdafx.h"
#include <iostream> 
#include "Figures.h"


using namespace std;




class Squard : public Figures
{
public:
	
	Squard() :
		hight(2),
		width(2)
	{

	}

	void Draw()                                   
	{
		
		for (int i = 0; i < hight; i++)
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


