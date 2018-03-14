#include "stdafx.h"
#include <iostream> 

using namespace std;

struct Cells
{
	int h=5;
	int w=5;
};


	class Field
	{
	public:
		
		int x, y, hight, width;
		

		Field()  
		{
			x = 10;
			y=10;
			hight = 100;
			width=50;			                  //Создание поля 
		}

		~Field()                                         
		{
			
		}

		void DrawField()                                    //Метод класса отрисовки. НАЙТИ КАК РИСОВАТЬ В КОНСОЛИ!!!!!!
		{
			
		
		}
		};

	class Figures
	{
	public:

		int x, y;
		Cells**arrayofcells;
		int cell_quantity_in_long;
		int cell_quantity_in_weird;

		Figures() 
		{
			x = 50;
			y = 10;
			int j = cell_quantity_in_weird;
			arrayofcells = new Cells*[j];
			for (int i = 0; i < cell_quantity_in_long; ++i)
			{
				arrayofcells = new Cells*[];
			}
		}



		virtual void Draw()
		{
			for (int i = 0; i < cell_quantity_in_long; ++i)
			{
				
					for (int j = 0; j < cell_quantity_in_weird; ++j)
					{

					}
				                                                                //общее уравнение отрисовки
			}
		}
		virtual void Falling()                                              // Изменение по координатам x
		{

		}

		virtual void Left_Right()                                                   // Изменение по координатам y
		{

		}
	};



	int main()
	{
		Field Show;
		Show.DrawField();
		 return 0;
}

