#include "stdafx.h"
#include "Game.h"
#include"Field.h"

Game::Game()
{
}

void Game::New_Game()
{
	field = new Field(100, 50);
	while (true)
	{
		// �������� ��� ������� �������� ������������ ����� �� �������
	}
}

void Game::Tick()
{
	//��������� ������� ������
	char Button = Read_Game_Button();
	  




	

}


Game::~Game()
{
}
