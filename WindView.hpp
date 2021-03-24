#pragma once
#include"IWindObserver.h"
#include <iostream>
class WindView :public IWindObserver
{
public:
	virtual void onWindChanged(Wind* _wind, Action);
	void printWind(Wind* _wind);
};
