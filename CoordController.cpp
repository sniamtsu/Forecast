#include"CoordController.hpp"

Coord* CoordController::createCoord(double _lon, double _lat)
{
	Coord* coord = new Coord(_lon, _lat);
	CoordController::sendEvent(coord, A_Create);
	return coord;
}

void CoordController::deleteCoord(Coord* _coord)
{
	CoordController::sendEvent(_coord, A_Delete);
	delete _coord;
}

void CoordController::addObserver(ICoordObserver* _observer)
{
	m_observers.insert(_observer);
}
void CoordController::removeObserver(ICoordObserver* _observer)
{
	for (auto it = m_observers.begin(); it != m_observers.end(); ++it)
	{
		if (*it == _observer)
		{
			m_observers.erase(it);
		}
	}
}
void CoordController::sendEvent(Coord* _coord, Action _action)
{
	for (auto observer : m_observers)
	{
		observer->onCoordChanged(_coord, _action);
	}		
}