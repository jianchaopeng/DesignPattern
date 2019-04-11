#pragma once

#include "IFactory.h"
#include "Product/PCDotaGame.h"
#include "Product/PCPubgGame.h"


class CPCGameFactory : public IFactory
{
public:


	virtual IDotaGame* CreateDotaGame() override
	{
		return new CPCDotaGame();
	}


	virtual IPubgGame* CreatePubgGame() override
	{
		return new CPCPubgGame();
	}

};