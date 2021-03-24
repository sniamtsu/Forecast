#pragma once
#include"ICityObserver.h"
#include <iostream>
class CityView :public ICityObserver
{
public:
	virtual void onCityChanged(City* _city, Action);
	void printCity(City* _city);
};
