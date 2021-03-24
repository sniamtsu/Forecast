#include "ControllersManager.hpp"
ControllersManager::~ControllersManager()
{
	delete m_controllerForCoord;
	delete m_controllerForCity;
	delete m_controllerForMainForecast;
	delete m_controllerForNet;
	delete m_controllerForSys;
	delete m_controllerForWeather;
	delete m_controllerForWind;
}

CoordController* ControllersManager::getControllerForCoord()const
{
	return m_controllerForCoord;
}
void ControllersManager::setControllerForCoord(CoordController* _coordController)
{
	delete m_controllerForCoord;
	m_controllerForCoord = _coordController;
}

MainForecastController* ControllersManager::getControllerForMainForecast()const
{
	return m_controllerForMainForecast;
}
void ControllersManager::setControllerForMainForecast(MainForecastController* _mainForecastController)
{
	delete m_controllerForMainForecast;
	m_controllerForMainForecast = _mainForecastController;
}

SysController* ControllersManager::getControllerForSys()const
{
	return m_controllerForSys;
}
void ControllersManager::setControllerForSys(SysController* _sysController)
{
	delete m_controllerForSys;
	m_controllerForSys = _sysController;
}

WeatherController* ControllersManager::getControllerForWeather()const
{
	return m_controllerForWeather;
}
void ControllersManager::setControllerForWeather(WeatherController* _weatherController)
{
	delete m_controllerForWeather;
	m_controllerForWeather = _weatherController;
}

WindController* ControllersManager::getControllerForWind()const
{
	return m_controllerForWind;
}
void ControllersManager::setControllerForWind(WindController* _windController)
{
	delete m_controllerForWind;
	m_controllerForWind = _windController;
}

CityController* ControllersManager::getCityController()const
{
	return m_controllerForCity;
}
void ControllersManager::setCityController(CityController* _cityController)
{
	delete m_controllerForCity;
	m_controllerForCity = _cityController;
}

NetController* ControllersManager::getNetController()const
{
	return m_controllerForNet;
}
void ControllersManager::setNetController(NetController* _netController)
{
	delete m_controllerForNet;
	m_controllerForNet = _netController;
}