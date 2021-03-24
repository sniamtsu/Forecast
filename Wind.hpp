#pragma once
class Wind
{
public:

	Wind(double _speed, double _deg);

	double getSpeed()const;
	void setSpeed(double _speed);

	double getDeg()const;
	void setDeg(double _deg);
private:
	double m_speed;
	double m_deg;
};