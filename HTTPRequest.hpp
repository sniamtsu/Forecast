#pragma once
#define CURL_STATICLIB
#include<iostream>
#include <string>
#include "curl/curl.h"
#include"HTTPRespons.hpp"
class HTTPRequest
{
public:
	HTTPRequest(const std::string &_cityName, const std::string &_countryName);

	std::string getHeader()const;
	void setHeader(std::string _header);

	std::string getBody()const;
	void setBody(std::string _body);

	std::string getKey()const;
	void setKey(std::string _key);

	std::string getCityName()const;
	void setCityName(const std::string &_cityName);

	std::string getCountryName()const;
	void setCountryName(const std::string &_cityName);

	std::string getUrl()const;
	void setUrl(const std::string &_url);

	HTTPRespons* execute();

private:
	std::string m_header;
	std::string m_body;
	std::string m_key;
	std::string m_cityName;
	std::string m_countryName;
	std::string m_url;
	std::string buffer;
	static int writer(char *data, size_t size, size_t nmemb, std::string *buffer)
	{
		int result = 0;
		if (buffer != NULL)
		{
			buffer->append(data, size * nmemb);
			result = size * nmemb;
		}
		return result;
	}	
};
