#pragma once
#include "Wind.hpp"
#include"IWindObserver.h"
#include <set>
class WindController
{
public:
	Wind* createWind(double _speed, double _deg);
	void deleteWind(Wind* _wind);

	void addObserver(IWindObserver* _observer);
	void removeObserver(IWindObserver* _observer);
	void sendEvent(Wind* _weather, Action _action);
private:
	std::set<IWindObserver*> m_observers;
};