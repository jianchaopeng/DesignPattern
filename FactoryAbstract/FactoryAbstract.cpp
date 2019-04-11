// FactoryAbstract.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include "Factory/PhoneGameFactory.h"
#include "Factory/PCGameFactory.h"

int main()
{
	CPhoneGameFactory* phoneGameFactory = new CPhoneGameFactory();

	IDotaGame* phoneDotaGame = phoneGameFactory->CreateDotaGame();
	phoneDotaGame->Run();
	delete phoneDotaGame;
	phoneDotaGame = nullptr;

	IPubgGame* phonePubgGame = phoneGameFactory->CreatePubgGame();
	phonePubgGame->Run();
	delete phonePubgGame;
	phonePubgGame = nullptr;


	CPCGameFactory* pcGameFactory = new CPCGameFactory();
	IDotaGame* pcDotaGame = pcGameFactory->CreateDotaGame();
	pcDotaGame->Run();
	delete pcDotaGame;
	pcDotaGame = nullptr;

	IPubgGame* pcPubgGame = pcGameFactory->CreatePubgGame();
	pcPubgGame->Run();
	delete pcPubgGame;
	pcPubgGame = nullptr;

}