#pragma once

#include "IDotaGame.h"

class CPCDotaGame : public IDotaGame
{
public:
	virtual void Run()
	{
		cout << "pcGame Dota Run ..." << endl;
	}
};