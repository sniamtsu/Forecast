#pragma once
#include"MainForecast.hpp"
#include"IMainForecastObserver.h"
#include<set>
class MainForecastController
{
public:
	MainForecast* createMainForecast(double _temp, double _pressure, double _humidity, double _tempMin, double _tempMax);
	void deleteMainForecast(MainForecast* _mainForecast);

	void addObserver(IMainForecastObserver* _observer);
	void removeObserver(IMainForecastObserver* _observer);
	void sendEvent(MainForecast* _mainForecast, Action _action);
private:
	std::set<IMainForecastObserver*> m_observers;
};