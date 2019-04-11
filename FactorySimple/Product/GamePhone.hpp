#pragma once

#include "IGame.h"

class CGamePhone :public IGame
{
public:
	virtual void run()
	{
		cout << "GamePhone run ..." << endl;
	}
};
