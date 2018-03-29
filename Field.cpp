#include "stdafx.h"
#include <iostream> 



using namespace std;




	class Field: public Figures
	{
	public:
		


	Field() :
			hight(200),
			width(100)
	{

	}

		void Draw()                                   
		{
			
		
			system("cls");
			for (int i = 0; i < width; i++)
			{
				cout << "*";
			}
			cout << endl;

			for (int i = 0; i < hight; i++)
			{
				for (int j = 0; j < width; j++)
				{
					if (j==0||j==width-1)
						cout << "*";
					else 
					{
						cout << " ";
					}
				}
				cout << endl;
				}
			
			for (int i = 0; i < width; i++)
			{
				cout << "*";
			}
			cout << endl;

		}
	};
	

	
