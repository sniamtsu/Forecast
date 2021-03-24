#pragma once
#include <nlohmann/json.hpp>
using json = nlohmann::json;
class HTTPRespons
{
public:
	HTTPRespons(json _jsn);
	json getRoot()const;
private:
	json m_respons;

};