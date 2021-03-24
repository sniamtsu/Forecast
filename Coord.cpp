#include "Coord.hpp"

Coord::Coord(double _lon, double _lat):
	m_lon(_lon),
	m_lat(_lat)
{}

double Coord::getLon()const
{
	return m_lon;
}
void Coord::setLon(double _lon)
{
	m_lon = _lon;
}

double Coord::getLat()const
{
	return m_lat;
}
void Coord::setLat(double _lat)
{
	m_lat = _lat;
}