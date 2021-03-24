#include "City.hpp"

City::City(json _jsn, CoordController* _coordController, MainForecastController* _mainForecastController, SysController* _sysController,
	WeatherController* _weatherController, WindController* _windController) :
	m_coord(_coordController->createCoord(_jsn["coord"]["lon"].get<double>(), _jsn["coord"]["lat"].get<double>())),

	m_weather(_weatherController->createWeather(_jsn["weather"].at(0)["id"].get<int>(), _jsn["weather"].at(0)["main"].get<std::string>(),
		_jsn["weather"].at(0)["description"].get<std::string>())),

	m_base(_jsn["base"].get<std::string>()),

	m_mainForecast(_mainForecastController->createMainForecast(_jsn["main"]["temp"].get<double>(), _jsn["main"]["pressure"].get<double>(), _jsn["main"]["humidity"].get<double>(),
		_jsn["main"]["temp_min"].get<double>(), _jsn["main"]["temp_max"].get<double>())),

	m_visibility(_jsn["visibility"].get<int>()),
		
	m_wind(_windController->createWind(_jsn["wind"]["speed"].get<double>(), _jsn["wind"]["deg"].get<double>())),

	m_dt(_jsn["dt"].get<int>()),

	m_sys(_sysController->createSys(_jsn["sys"]["type"].get<int>(), _jsn["sys"]["id"].get<int>(), _jsn["sys"]["message"].get<double>(),
		_jsn["sys"]["country"].get<std::string>(), _jsn["sys"]["sunrise"].get<int>(), _jsn["sys"]["sunset"].get<int>())),

	m_timezone(_jsn["timezone"].get<int>()),

	m_id(_jsn["id"].get<int>()),

	m_name(_jsn["name"].get<std::string>()),

	m_cod(_jsn["cod"].get<int>())
{}

City::~City()
{
	delete m_coord;
	delete m_weather;
	delete m_mainForecast;
	delete m_wind;
	delete m_sys;
}


Coord* City::getCoord()const
{
	return m_coord;
}
void City::setCoord(Coord* _coord)
{
	delete m_coord;
	m_coord = _coord;
}

Weather* City::getWeather()const
{
	return m_weather;
}
void City::setWeather(Weather* _weather)
{
	delete m_weather;
	m_weather = _weather;
}

std::string City::getBase()const
{
	return m_base;
}
void City::setBase(std::string _base)
{
	m_base = _base;
}

MainForecast* City::getMainForecast()const
{
	return m_mainForecast;
}
void City::setMainForecast(MainForecast* _mainForecast)
{
	delete m_mainForecast;
	m_mainForecast = _mainForecast;
}

int City::getVisibility()const
{
	return m_visibility;
}
void City::setVisibility(int _visibility)
{
	m_visibility = _visibility;
}

Wind* City::getWind()const
{
	return m_wind;
}
void City::setWind(Wind* _wind)
{
	delete m_wind;
	m_wind = _wind;
}

int City::getDt()const
{
	return m_dt;
}
void City::setDt(int _dt)
{
	m_dt = _dt;
}

Sys* City::getSys()const
{
	return m_sys;
}
void City::setSys(Sys* _sys)
{
	delete m_sys;
	m_sys = _sys;
}

int City::getTimezone()const
{
	return m_timezone;
}
void City::setTimezone(int _timezune)
{
	m_timezone = _timezune;
}

int City::getId()const
{
	return m_id;
}
void City::setId(int _id)
{
	m_id = _id;
}

std::string City::getName()const
{
	return m_name;
}
void City::setName(std::string _name)
{
	m_name = _name;
}

int City::getCod()const
{
	return m_cod;
}
void City::setCod(int _cod)
{
	m_cod = _cod;
}

