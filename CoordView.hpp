#pragma once
#include"ICoordObserver.h"
#include <iostream>
class CoordView :public ICoordObserver
{
public:
	virtual void onCoordChanged(Coord* _coord, Action);
	void printCoord(Coord* _coord);
};
