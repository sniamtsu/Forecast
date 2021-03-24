#pragma once
#include"IMainForecastObserver.h"
#include <iostream>
class MainForecastView :public IMainForecastObserver
{
public:
	virtual void onMainForecastChanged(MainForecast* _mainForecast, Action);
	void printMainForecast(MainForecast* _mainForecast);
};