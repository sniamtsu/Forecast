#include"WeatherView.hpp"
#include<string>
void WeatherView::onWeatherChanged(Weather* _weather, Action _action)
{
	std::cout << "Weather changed" << std::endl;
	switch (_action)
	{
	case A_Create:
	{
		std::cout << "Action: Create" << std::endl;
		break;
	}
	case A_Delete:
	{
		std::cout << "Action: Delete" << std::endl;
		break;
	}
	default:
		break;
	}

	WeatherView::printWeather(_weather);
}
void WeatherView::printWeather(Weather* _weather)
{
	std::cout << "Weather info" << std::endl;
	std::cout << "Id: " << _weather->getId() << std::endl;
	std::cout << "Main: " << _weather->getMain() << std::endl;
	std::cout << "Description: " << _weather->getDescribtion() << std::endl;
	std::cout << "\n\n";
}