#include "MainForecastController.hpp"
MainForecast* MainForecastController::createMainForecast(double _temp, double _pressure, double _humidity, double _tempMin, double _tempMax)
{
	MainForecast* mainForecast = new MainForecast(_temp, _pressure, _humidity, _tempMin, _tempMax);
	MainForecastController::sendEvent(mainForecast, A_Create);
	return mainForecast;
}
void MainForecastController::deleteMainForecast(MainForecast* _mainForecast)
{
	MainForecastController::sendEvent(_mainForecast, A_Delete);
	delete _mainForecast;
}
void MainForecastController::addObserver(IMainForecastObserver* _observer)
{
	m_observers.insert(_observer);
}
void MainForecastController::removeObserver(IMainForecastObserver* _observer)
{
	for (auto it = m_observers.begin(); it != m_observers.end(); ++it)
	{
		if (*it == _observer)
		{
			m_observers.erase(it);
		}
	}
}
void MainForecastController::sendEvent(MainForecast* _mainForecast, Action _action)
{
	for (auto observer : m_observers)
	{
		observer->onMainForecastChanged(_mainForecast, _action);
	}
}