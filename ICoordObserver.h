#pragma once
#include"Coord.hpp"
#include"Enums.h"
class ICoordObserver
{
public:
	virtual ~ICoordObserver() = default;
	virtual void onCoordChanged(Coord*, Action) = 0;

};