#pragma once
#include <iostream>
class Sys
{
public:

	Sys(int _type, int _id, double _message, std::string _country, int _sunrise, int _sunset);

	int getType()const;
	void setType(int _type);

	int getId()const;
	void setId(int _id);

	double getMessage()const;
	void setMessage(double _message);

	std::string getCountry()const;
	void setCountry(std::string _country);

	int getSunrise()const;
	void setSunrise(int _sunrise);

	int getSunset()const;
	void setSunset(int _sunset);
private:
	int m_type;
	int m_id;
	double m_message;
	std::string m_country;
	int m_sunrise;
	int m_sunset;
};