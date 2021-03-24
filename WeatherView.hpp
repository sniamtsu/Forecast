#pragma once
#include"IWeatherObserver.h"
#include <iostream>
class WeatherView :public IWeatherObserver
{
public:
	virtual void onWeatherChanged(Weather* _weather, Action);
	void printWeather(Weather* _weather);
};
