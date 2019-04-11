// FactoryMethod.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include "Factory/GamePCFactory.h"
#include "Factory/GamePhoneFactory.h"

int main()
{
	IGame* pcGame = CGamePCFactory::instance()->CreateGame();
	pcGame->Run();
	delete pcGame;
	pcGame = nullptr;


	IGame* phoneGame = CGamePhoneFactory::instance()->CreateGame();
	phoneGame->Run();
	delete phoneGame;
	phoneGame = nullptr;
}
