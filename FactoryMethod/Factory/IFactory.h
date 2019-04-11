#pragma once

class IGame;

class IFactory
{
public:
	virtual ~IFactory()
	{
	}

	virtual IGame* CreateGame() = 0;
};
