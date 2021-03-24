#include"MainForecastView.hpp"
void MainForecastView::onMainForecastChanged(MainForecast* _mainForecast, Action _action)
{
	std::cout << "Main Forecast changed" << std::endl;
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

	MainForecastView::printMainForecast(_mainForecast);
}
void MainForecastView::printMainForecast(MainForecast* _mainForecast)
{
	std::cout << "Main Forecast info" << std::endl;
	std::cout << "Temp: " << _mainForecast->getTemp() << std::endl;
	std::cout << "Pressure: " << _mainForecast->getPressure() << std::endl;
	std::cout << "Humidity: " << _mainForecast->getHumidity() << std::endl;
	std::cout << "Temp min: " << _mainForecast->getTempMin() << std::endl;
	std::cout << "Temp Max: " << _mainForecast->getTempMax() << std::endl;
	std::cout << "\n\n";
}