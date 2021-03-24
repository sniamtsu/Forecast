#include"CityController.hpp"
CityController::~CityController()
{
	for (int i = 0; i < m_cities.size(); ++i)
	{
		CityController::deleteCity(m_cities[i]);
	}
	m_cities.clear();
}

City* CityController::createCity(json _jsn, CoordController* _coordController, MainForecastController* _mainForecastController, SysController* _sysController,
	WeatherController* _weatherController, WindController* _windController)
{
	City* city = new City(_jsn, _coordController, _mainForecastController, _sysController, _weatherController, _windController);
	CityController::sendEvent(city, A_Create);
	return city;
}
void CityController::deleteCity(City* _city)
{
	CityController::sendEvent(_city, A_Delete);
	delete _city;
}
City* CityController::addCity(City* _city)
{
	CityController::sendEvent(_city, A_Add);
	for (auto city : m_cities)
	{
		if (city->getName() == _city->getName())
		{
			return nullptr;
		}
	}
	m_cities.push_back(_city);
	return _city;
}
void CityController::removeCity(City* _city)
{
	CityController::sendEvent(_city, A_Delete);
	for (int i=0;i<m_cities.size();++i)
	{
		if (m_cities[i]->getName() == _city->getName())
		{
			delete _city;
			m_cities.erase(m_cities.begin() + i);			
			return;
		}
	}
	std::cout << "City: " << _city->getName() << " is not in our base!" << std::endl;
}

void CityController::addObserver(ICityObserver* _observer)
{
	m_observers.insert(_observer);
}
void CityController::removeObserver(ICityObserver* _observer)
{
	for (auto it = m_observers.begin(); it != m_observers.end(); ++it)
	{
		if (*it == _observer)
		{
			m_observers.erase(it);
		}
	}
}
void CityController::sendEvent(City* _city, Action _action)
{
	for (auto observer : m_observers)
	{
		observer->onCityChanged(_city, _action);
	}
}