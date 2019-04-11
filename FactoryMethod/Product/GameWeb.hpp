#pragma once

#include "IGame.h"

class CGameWeb : public IGame
{
public:
	~CGameWeb(){}
public:
	virtual void Run() override
	{
		cout << "web Game run ..." << endl;
	}
};