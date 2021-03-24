#pragma once
#include"Weather.hpp"
#include"IWeatherObserver.h"
#include<set>
class WeatherController
{
public:
	Weather* createWeather(int _id, std::string _main, std::string _description);
	void deleteWeather(Weather* _weather);


	void addObserver(IWeatherObserver* _observer);
	void removeObserver(IWeatherObserver* _observer);
	void sendEvent(Weather* _weather, Action _action);
private:
	std::set<IWeatherObserver*> m_observers;
};