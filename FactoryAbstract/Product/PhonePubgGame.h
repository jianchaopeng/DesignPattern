#pragma once

#include "IPubgGame.h"

class CPhonePugbGame : public IPubgGame
{
public:
	virtual void Run()
	{
		cout << "PhoneGame PUBG Run ..." << endl;
	}
};
