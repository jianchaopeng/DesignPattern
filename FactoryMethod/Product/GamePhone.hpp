#pragma once

#include "IGame.h"

class CGamePhone :public IGame
{
public:
	~CGamePhone() {}
public:

	virtual void Run() override
	{
		cout << "Phone Game Run ..." << endl;
	}

protected:
private:
};