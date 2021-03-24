#pragma once
#include"CoordController.hpp"
#include"MainForecastController.hpp"
#include"SysController.hpp"
#include"WeatherController.hpp"
#include"WindController.hpp"
#include <nlohmann/json.hpp>
using json = nlohmann::json;
class City
{
public:

	City(json _jsn, CoordController* _coordController, MainForecastController* _mainForecastController, SysController* _sysController,
		WeatherController* _weatherController, WindController* _windController);

	~City();

	Coord* getCoord()const;
	void setCoord(Coord* _coord);

	Weather* getWeather()const;
	void setWeather(Weather* _weather);

	std::string getBase()const;
	void setBase(std::string _base);

	MainForecast* getMainForecast()const;
	void setMainForecast(MainForecast* _mainForecast);

	int getVisibility()const;
	void setVisibility(int _visibility);

	Wind* getWind()const;
	void setWind(Wind* _wind);

	int getDt()const;
	void setDt(int _dt);

	Sys* getSys()const;
	void setSys(Sys* _sys);

	int getTimezone()const;
	void setTimezone(int _timezune);

	int getId()const;
	void setId(int _id);

	std::string getName()const;
	void setName(std::string _name);

	int getCod()const;
	void setCod(int _cod);


private:
	Coord* m_coord;
	Weather* m_weather;
	std::string m_base;
	MainForecast* m_mainForecast;
	int m_visibility;
	Wind* m_wind;
	int m_dt;
	Sys* m_sys;
	int m_timezone;
	int m_id;
	std::string m_name;
	int m_cod;

	
	
};