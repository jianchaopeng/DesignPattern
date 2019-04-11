#ifndef _DESIGN_PATTERN_FACTORY_SIMPLE_IGAME_H_
#define _DESIGN_PATTERN_FACTORY_SIMPLE_IGAME_H_

/*
 * 简单工厂 产品基类
 */
#include <iostream>

using namespace std;

class IGame
{
public:
	virtual void run() = 0;
};

#endif /*_DESIGN_PATTERN_FACTORY_SIMPLE_IGAME_H_*/
