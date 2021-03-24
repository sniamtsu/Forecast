#include "Sys.hpp"

Sys::Sys(int _type, int _id, double _message, std::string _country, int _sunrise, int _sunset):
	m_type(_type),
	m_id(_id),
	m_message(_message),
	m_country(_country),
	m_sunrise(_sunrise),
	m_sunset(_sunset)
{}

int Sys::getType()const
{
	return m_type;
}
void Sys::setType(int _type)
{
	m_type = _type;
}

int Sys::getId()const
{
	return m_id;
}
void Sys::setId(int _id)
{
	m_id = _id;
}

double Sys::getMessage()const
{
	return m_message;
}
void Sys::setMessage(double _message)
{
	m_message = _message;
}

std::string Sys::getCountry()const
{
	return m_country;
}
void Sys::setCountry(std::string _country)
{
	m_country = _country;
}

int Sys::getSunrise()const
{
	return m_sunrise;
}
void Sys::setSunrise(int _sunrise)
{
	m_sunrise = _sunrise;
}

int Sys::getSunset()const
{
	return m_sunset;
}
void Sys::setSunset(int _sunset)
{
	m_sunset = _sunset;
}