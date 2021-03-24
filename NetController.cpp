#include"NetController.hpp"

HTTPRequest* NetController::createReaquest(const std::string &_cityName, const std::string &_countryName)
{
	for (auto req : m_net)
	{
		if (req.first->getCityName() == _cityName)
		{
			return req.first;
		}
	}
	HTTPRequest* request= new HTTPRequest(_cityName, _countryName);	
	m_net.insert(std::pair< HTTPRequest*, HTTPRespons*>(request, nullptr));
	return request;
}
void NetController::deleteRequest(HTTPRequest* _request)
{
	delete _request;
}

HTTPRespons* NetController::createRespons(json _jsn, HTTPRequest* _request)
{
	HTTPRespons* respons = new HTTPRespons(_jsn);
	for (auto it= m_net.begin();it!=m_net.end();++it)
	{
		if (it->first->getCityName() == _request->getCityName())
		{
			it->second = respons;
		}
	}
	return respons;

}
void NetController::deleteRespons(HTTPRespons* _respons)
{
	delete _respons;
}

HTTPRequest* NetController::getRequest(const std::string &_cityName)
{
	for (auto it = m_net.begin(); it != m_net.end(); ++it)
	{
		if (it->first->getCityName() == _cityName)
		{
			return it->first;
		}
	}
	std::cout << "No request created" << std::endl;
	return nullptr;
}

HTTPRespons* NetController::getRespons(const std::string _cityName)
{
	for (auto it = m_net.begin(); it != m_net.end(); ++it)
	{
		if (it->first->getCityName() == _cityName)
		{
			return it->second;
		}
	}
	std::cout << "No respons created" << std::endl;
	return nullptr;
}