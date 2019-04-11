#pragma once

#include "IPubgGame.h"

class CPhoneDotaGame : public IDotaGame
{
public:

	virtual void Run() override
	{
		cout << "PhoneGame Dota Run ... " << endl;
	}

};
