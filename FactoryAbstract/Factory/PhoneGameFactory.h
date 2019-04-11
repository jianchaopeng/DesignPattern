#pragma once

#include "IFactory.h"
#include "Product/PhoneDotaGame.h"
#include "Product/PhonePubgGame.h"

class CPhoneGameFactory :public IFactory
{
public:


	virtual IDotaGame* CreateDotaGame() override
	{
		return new CPhoneDotaGame();
	}


	virtual IPubgGame* CreatePubgGame() override
	{
		return new CPhonePugbGame();
	}

};