#include "WindController.hpp"
Wind* WindController::createWind(double _speed, double _deg)
{
	Wind* wind = new Wind(_speed, _deg);
	WindController::sendEvent(wind, A_Create);
	return wind;
}
void WindController::deleteWind(Wind* _wind)
{
	WindController::sendEvent(_wind, A_Delete);
	delete _wind;
}

void WindController::addObserver(IWindObserver* _observer)
{
	m_observers.insert(_observer);
}
void WindController::removeObserver(IWindObserver* _observer)
{
	for (auto it = m_observers.begin(); it != m_observers.end(); ++it)
	{
		if (*it == _observer)
		{
			m_observers.erase(it);
		}
	}
}
void WindController::sendEvent(Wind* _weather, Action _action)
{
	for (auto observer : m_observers)
	{
		observer->onWindChanged(_weather, _action);
	}
}