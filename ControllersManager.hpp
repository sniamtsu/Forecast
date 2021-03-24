#pragma once
#include"CoordController.hpp"
#include"MainForecastController.hpp"
#include"SysController.hpp"
#include"WeatherController.hpp"
#include"WindController.hpp"
#include"CityController.hpp"
#include"NetController.hpp"
class ControllersManager
{
public:
	ControllersManager(){}
	~ControllersManager();

	CoordController* getControllerForCoord()const;
	void setControllerForCoord(CoordController* _coordController);

	MainForecastController* getControllerForMainForecast()const;
	void setControllerForMainForecast(MainForecastController* _mainForecastController);

	SysController* getControllerForSys()const;
	void setControllerForSys(SysController* _sysController);

	WeatherController* getControllerForWeather()const;
	void setControllerForWeather(WeatherController* _weatherController);

	WindController* getControllerForWind()const;
	void setControllerForWind(WindController* _windController);

	CityController* getCityController()const;
	void setCityController(CityController* _cityController);

	NetController* getNetController()const;
	void setNetController(NetController* _netController);


private:
	CoordController* m_controllerForCoord = new CoordController;
	MainForecastController* m_controllerForMainForecast = new MainForecastController;
	SysController* m_controllerForSys = new SysController;
	WeatherController* m_controllerForWeather = new WeatherController;
	WindController* m_controllerForWind = new WindController;
	CityController* m_controllerForCity = new CityController;
	NetController* m_controllerForNet = new NetController;

};