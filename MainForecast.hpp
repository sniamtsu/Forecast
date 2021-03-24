#pragma once
class MainForecast
{
public:
	MainForecast(double _temp, double _pressure, double _humidity, double _tempMin, double _tempMax);

	double getTemp()const;
	void setTemp(double _temp);

	double getPressure()const;
	void setPressure(double _pressure);

	double getHumidity()const;
	void setHumidity(double _humidity);

	double getTempMin()const;
	void setTempMin(double _tempMin);

	double getTempMax()const;
	void setTempMax(double _tempMax);
private:
	double m_temp;
	double m_pressure;
	double m_humidity;
	double m_tempMin;
	double m_tempMax;
};