#include"HTTPRequest.hpp"

HTTPRequest::HTTPRequest(const std::string &_cityName,const std::string &_countryName)
{
	m_header = "http://api.openweathermap.org";
	m_body = "/data/2.5/weather?q=";
	m_cityName = _cityName;
	m_countryName = ","+_countryName;
	m_key = "&APPID=4c4c757898ec1b62f911b476728476d9";
	m_url = m_header+m_body+m_cityName+m_countryName+m_key;
}

std::string HTTPRequest::getHeader()const
{
	return m_header;
}
void HTTPRequest::setHeader(std::string _header)
{
	m_header = _header;
}

std::string HTTPRequest::getBody()const
{
	return m_body;
}
void HTTPRequest::setBody(std::string _body)
{
	m_body = _body;
}

std::string HTTPRequest::getKey()const
{
	return m_key;
}
void HTTPRequest::setKey(std::string _key)
{
	m_key = _key;
}

std::string HTTPRequest::getCityName()const
{
	return m_cityName;
}
void HTTPRequest::setCityName(const std::string &_cityName)
{
	m_cityName = _cityName;
}
std::string HTTPRequest::getCountryName()const
{
	return m_countryName;
}
void HTTPRequest::setCountryName(const std::string &_countryName)
{
	m_countryName = _countryName;
}
std::string HTTPRequest::getUrl()const
{
	return m_url;
}
void HTTPRequest::setUrl(const std::string &_url)
{
	m_url = _url;
}
HTTPRespons* HTTPRequest::execute()
{
	CURL *  curl= curl_easy_init();
	if (curl)
	{
		curl_easy_setopt(curl, CURLOPT_URL, m_url.c_str());
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writer);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA,&buffer);
		curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}
	return new HTTPRespons(json::parse(buffer));
}