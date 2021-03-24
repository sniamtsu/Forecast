#pragma once
#include"Sys.hpp"
#include"Enums.h"
class ISysObserver
{
public:
	virtual ~ISysObserver() = default;
	virtual void onSysChanged(Sys*, Action) = 0;
};