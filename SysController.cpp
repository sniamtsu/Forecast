#include "SysController.hpp"
Sys* SysController::createSys(int _type, int _id, double _message, std::string _country, int _sunrise, int _sunset)
{
	Sys* sys = new Sys(_type, _id, _message, _country, _sunrise, _sunset);
	SysController::sendEvent(sys, A_Create);
	return sys;
}
void SysController::deleteSys(Sys* _sys)
{
	SysController::sendEvent(_sys, A_Delete);
	delete _sys;
}

void SysController::addObserver(ISysObserver* _observer)
{
	m_observers.insert(_observer);
}
void SysController::removeObserver(ISysObserver* _observer)
{
	for (auto it = m_observers.begin(); it != m_observers.end(); ++it)
	{
		if (*it == _observer)
		{
			m_observers.erase(it);
		}
	}
}
void SysController::sendEvent(Sys* _sys, Action _action)
{
	for (auto observer : m_observers)
	{
		observer->onSysChanged(_sys, _action);
	}
}