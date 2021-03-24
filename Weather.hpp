#pragma once
#include <iostream>
class Weather
{
public:

	Weather(int _id, std::string _main, std::string _description);

	int getId()const;
	void setId(int _id);

	std::string getMain()const;
	void setMain(std::string _main);

	std::string getDescribtion()const;
	void setDescribtion(std::string _describtion);
		
private:
	int m_id;
	std::string m_main;
	std::string m_describtion;
};