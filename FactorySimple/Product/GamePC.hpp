#pragma once

#include "IGame.h"

class CGamePC : public IGame
{
public:
	virtual void run()
	{
		cout << "GamePC run ..." << endl;
	}
};
