#pragma once
#include"City.hpp"
#include"ICityObserver.h"
#include<set>
#include<vector>
class CityController
{
public:
	CityController() {}
	~CityController();

	City* createCity(json _jsn, CoordController* _coordController, MainForecastController* _mainForecastController, SysController* _sysController,
		WeatherController* _weatherController, WindController* _windController);
	

	void deleteCity(City* _city);

	City* addCity(City* _city);
	void removeCity(City* _city);

	void addObserver(ICityObserver* _observer);
	void removeObserver(ICityObserver* _observer);
	void sendEvent(City* _city, Action _action);
private:
	std::set<ICityObserver*> m_observers;
	std::vector<City*> m_cities;
	
};