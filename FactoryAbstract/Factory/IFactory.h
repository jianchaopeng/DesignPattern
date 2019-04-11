#pragma once

#include "Product/IDotaGame.h"
#include "Product/IPubgGame.h"



class IFactory 
{
public:
	virtual IDotaGame* CreateDotaGame() = 0;
	virtual IPubgGame* CreatePubgGame() = 0;
};