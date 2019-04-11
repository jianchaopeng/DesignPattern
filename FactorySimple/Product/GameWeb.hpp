#pragma once

#include "IGame.h"

class CGameWeb : public IGame
{
public:
	virtual void run()
	{
		cout << "GameWeb run..." << endl;
	}

};