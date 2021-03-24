#pragma once
#include"City.hpp"
#include"Enums.h"
class ICityObserver
{
public:
	virtual ~ICityObserver() = default;
	virtual void onCityChanged(City*, Action) = 0;

};