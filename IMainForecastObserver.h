#pragma once
#include"MainForecast.hpp"
#include"Enums.h"
class IMainForecastObserver
{
public:
	virtual ~IMainForecastObserver() = default;
	virtual void onMainForecastChanged(MainForecast*, Action) = 0;

};