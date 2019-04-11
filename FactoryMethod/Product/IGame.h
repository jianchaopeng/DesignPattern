#pragma once

#include <iostream>

using namespace std;

class IGame
{
public:
	virtual ~IGame() {}

	virtual void Run() = 0;
};