#pragma once
#include "Sys.hpp"
#include "ISysObserver.h"
#include<set>
class SysController
{
public:
	Sys* createSys(int _type, int _id, double _message, std::string _country, int _sunrise, int _sunset);
	void deleteSys(Sys* _sys);

	void addObserver(ISysObserver* _observer);
	void removeObserver(ISysObserver* _observer);
	void sendEvent(Sys* _sys, Action _action);
private:
	std::set<ISysObserver*> m_observers;
};