#include "MainForecast.hpp"

MainForecast::MainForecast(double _temp, double _pressure, double _humidity, double _tempMin, double _tempMax):
	m_temp(_temp),
	m_pressure(_pressure),
	m_humidity(_humidity),
	m_tempMin(_tempMin),
	m_tempMax(_tempMax)
{}

double MainForecast::getTemp()const
{
	return m_temp;
}
void MainForecast::setTemp(double _temp)
{
	m_temp = _temp;
}

double MainForecast::getPressure()const
{
	return m_pressure;
}
void MainForecast::setPressure(double _pressure)
{
	m_pressure = _pressure;
}

double MainForecast::getHumidity()const
{
	return m_humidity;
}
void MainForecast::setHumidity(double _humidity)
{
	m_humidity = _humidity;
}

double MainForecast::getTempMin()const
{
	return m_tempMin;
}
void MainForecast::setTempMin(double _tempMin)
{
	m_tempMin = _tempMin;
}

double MainForecast::getTempMax()const
{
	return m_tempMax;
}
void MainForecast::setTempMax(double _tempMax)
{
	m_tempMax = _tempMax;
}