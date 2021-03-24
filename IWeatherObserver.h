#pragma once
#include"Weather.hpp"
#include"Enums.h"
class IWeatherObserver
{
public:
	virtual ~IWeatherObserver() = default;
	virtual void onWeatherChanged(Weather*, Action) = 0;
};