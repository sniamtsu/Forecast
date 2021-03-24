#pragma once
#include "Coord.hpp"
#include "ICoordObserver.h"
#include<set>
class CoordController
{
public:

	Coord* createCoord(double _lon, double _lat);

	void deleteCoord(Coord* _coord);

	void addObserver(ICoordObserver* _observer);
	void removeObserver(ICoordObserver* _observer);
	void sendEvent(Coord* _coord, Action _action);
private:
	std::set<ICoordObserver*> m_observers;
};