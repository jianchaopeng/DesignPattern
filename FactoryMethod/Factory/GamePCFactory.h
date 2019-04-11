#pragma once

#include "IFactory.h"
#include "Product/GamePC.hpp"

class CGamePCFactory : public IFactory
{
public:
	static CGamePCFactory* instance()
	{
		static CGamePCFactory inst;
		return &inst;
	}

public:
	virtual IGame* CreateGame() override
	{
		return new CGamePC();
	}

};
