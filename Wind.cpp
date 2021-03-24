#include "Wind.hpp"

Wind::Wind(double _speed, double _deg):
	m_speed(_speed),
	m_deg(_deg)
{}

double Wind::getSpeed()const
{
	return m_speed;
}
void Wind::setSpeed(double _speed)
{
	m_speed = _speed;
}

double Wind::getDeg()const
{
	return m_deg;
}
void Wind::setDeg(double _deg)
{
	m_deg = _deg;
}