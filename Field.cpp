#include "stdafx.h"
#include <iostream> 
#include <windows.h>
#include<conio.h>

using namespace std;


struct Cells
{
	int h = 5;
	int w = 5;
};

	class Field
	{
	public:
		HWND m_ConsoleWindow;                                       //получение консольного окна
		HDC m_hDC;                                                 //получение контента устройства для рисовапния
		int x, y, hight, width;                                    //координаты смещения поля от угла, ширина и высота(свойства класса)
		Cells**cells_array;
		int cells_size;

	
		Field() :                                     //конструктор класса по умолчанию
		
			m_ConsoleWindow (GetConsoleWindow()),                          //получение консольного окна
		    m_hDC(GetDC(m_ConsoleWindow)),                            //получение контента устройства для рисовапния
			x(50),                                                      //координаты смещения поля от угла, ширина и высота(свойства класса)
			y(10),
			hight (20),
			width (10),      
			cells_array(0),
			cells_size(25)

			{
				cells_array = new Cells*[hight];
				for (int i = 0; i < width; i++)
					cells_array[i] = new Cells;

			}		                  //Создание поля 
		

		~Field()                                           //Деструктор класса
		{
			for (int i = 0; i < width; i++)
				delete[] cells_array[i];
			delete[] cells_array;
		}

		void DrawField()                                    //Метод класса отрисовки представление поля как массива клеток
		{
			
			for (int i = 0; i < hight; i++)
			{
				for (int j = 0; j < width; j++)
				{
					
						SelectObject(m_hDC, CreateSolidBrush(RGB(255, 255, 255)));

					Rectangle(m_hDC, x+ j*cells_size, y + i*cells_size, x + j*cells_size + cells_size, y + i*cells_size + cells_size);
				
				}
			}

		}
	};
	
	int main()
	{
		Field Show;
		Show.DrawField();
		_getch();
		 return 0;
}
	
