#pragma once
#include"ISysObserver.h"
#include <iostream>
class SysView :public ISysObserver
{
public:
	virtual void onSysChanged(Sys* _sys, Action);
	void printSys(Sys* _sys);
};
