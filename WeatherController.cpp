#include "WeatherController.hpp"
Weather* WeatherController::createWeather(int _id, std::string _main, std::string _description)
{
	Weather* weather = new Weather(_id, _main, _description);
	WeatherController::sendEvent(weather, A_Create);
	return weather;
}
void WeatherController::deleteWeather(Weather* _weather)
{
	WeatherController::sendEvent(_weather, A_Create);
	delete _weather;
}

void WeatherController::addObserver(IWeatherObserver* _observer)
{
	m_observers.insert(_observer);
}
void WeatherController::removeObserver(IWeatherObserver* _observer)
{
	for (auto it = m_observers.begin(); it != m_observers.end(); ++it)
	{
		if (*it == _observer)
		{
			m_observers.erase(it);
		}
	}
}
void WeatherController::sendEvent(Weather* _weather, Action _action)
{
	for (auto observer : m_observers)
	{
		observer->onWeatherChanged(_weather, _action);
	}
}