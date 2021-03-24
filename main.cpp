#define CURL_STATICLIB
#include "curl/curl.h"
#include <iostream>
#include "CoordView.hpp"
#include "MainForecastView.hpp"
#include "SysView.hpp"
#include "WeatherView.hpp"
#include "WindView.hpp"
#include "CityView.hpp"
#include "ControllersManager.hpp"
int main()
{	
	//Create controllers manager
	ControllersManager* controllerManager = new ControllersManager;

	//Create view for all classes
	controllerManager->getCityController()->addObserver(new CityView);
	controllerManager->getControllerForMainForecast()->addObserver(new MainForecastView);
	controllerManager->getControllerForSys()->addObserver(new SysView);
	controllerManager->getControllerForWeather()->addObserver(new WeatherView);
	controllerManager->getControllerForWind()->addObserver(new WindView);
	controllerManager->getCityController()->addObserver(new CityView);

	//Create request
	controllerManager->getNetController()->createReaquest("Kiev", "ua");
	
	//Create respons
	controllerManager->getNetController()->createRespons(controllerManager->getNetController()->getRequest("Kiev")->execute()->getRoot(),
		controllerManager->getNetController()->getRequest("Kiev"));

	//Create and add city
	controllerManager->getCityController()->addCity(controllerManager->getCityController()->createCity(controllerManager->getNetController()->getRespons("Kiev")->getRoot(),
		controllerManager->getControllerForCoord(), controllerManager->getControllerForMainForecast(), controllerManager->getControllerForSys(),
		controllerManager->getControllerForWeather(), controllerManager->getControllerForWind()));

	


	int a;
	std::cin >> a;
	
	return 0;
}