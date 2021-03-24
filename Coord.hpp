#pragma once

class Coord
{
public:

	Coord(double _lon, double _lat);

	double getLon()const;
	void setLon(double _lon);

	double getLat()const;
	void setLat(double _lat);
private:
	double m_lon;
	double m_lat;
};