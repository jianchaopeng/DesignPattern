#pragma once

#include "IFactory.h"
#include "Product/GamePhone.hpp"

class CGamePhoneFactory : public IFactory
{
public:
	static CGamePhoneFactory* instance()
	{
		static CGamePhoneFactory inst;
		return &inst;
	}

public:
	IGame* CreateGame()
	{
		return new CGamePhone();
	}

};
