#pragma once

#include "Product/GameWeb.hpp"
#include "Product/GamePC.hpp"
#include "Product/GamePhone.hpp"

enum EGameType
{
	EGameTypePc = 0,
	EGameTypeWeb = 1,
	EGameTypePhone = 2,
};

class CGameFactory
{
public:
	static IGame* CreateGame(EGameType gameType)
	{
		switch (gameType)
		{
		case EGameTypePc:
			return new CGamePC();
		case EGameTypeWeb:
			return new CGameWeb();
		case EGameTypePhone:
			return new CGamePhone();
		default:
			return nullptr;
		}

	}
};