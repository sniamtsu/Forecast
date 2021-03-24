#pragma once
#include"HTTPRequest.hpp"
#include"HTTPRespons.hpp"
#include<map>
class NetController
{
public:
	HTTPRequest* createReaquest(const std::string &_cityName, const std::string &_countryName);
	void deleteRequest(HTTPRequest* _request);

	HTTPRespons* createRespons(json _jsn, HTTPRequest* _request);
	void deleteRespons(HTTPRespons* _respons);

	HTTPRequest* getRequest(const std::string &_cityName);

	HTTPRespons* getRespons(const std::string _cityName);

	int size()
	{
		return m_net.size();
	}

	void printCities()
	{
		for (auto city : m_net)
		{
			std::cout << city.first->getCityName();
		}
	}
private:
	std::map<HTTPRequest*, HTTPRespons*> m_net;
};