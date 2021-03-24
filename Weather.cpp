#include "Weather.hpp"

Weather::Weather(int _id, std::string _main, std::string _description):
	m_id(_id),
	m_main(_main),
	m_describtion(_description)
{}

int Weather::getId()const
{
	return m_id;
}
void Weather::setId(int _id)
{
	m_id = _id;
}

std::string Weather::getMain()const
{
	return m_main;
}
void Weather::setMain(std::string _main)
{
	m_main = _main;
}

std::string Weather::getDescribtion()const
{
	return m_describtion;
}
void Weather::setDescribtion(std::string _describtion)
{
	m_describtion = _describtion;
}