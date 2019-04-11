#pragma once

#include "IGame.h"

class CGamePC : public IGame
{
public:
	virtual ~CGamePC(){}
public:
	virtual void Run() override
	{
		cout << "PC Game Run ..." << endl;
	}
};