#pragma once
#include"Wind.hpp"
#include"Enums.h"
class IWindObserver
{
public:
	virtual ~IWindObserver() = default;
	virtual void onWindChanged(Wind*, Action) = 0;
};