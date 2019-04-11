#pragma once

#include "IDotaGame.h"

class CPCPubgGame : public IPubgGame
{
public:
	

	virtual void Run() override
	{
		cout << "PCGame PUBG Run ... " << endl;
	}

};