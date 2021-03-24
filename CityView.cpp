#include"CityView.hpp"
#include<string>
void CityView::onCityChanged(City* _city, Action _action)
{
	std::cout << "City changed" << std::endl;
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
	case A_Add:
	{
		std::cout << "Action: Add to base" << std::endl;
		break;
	}
	default:
		break;
	}

	CityView::printCity(_city);
}
void CityView::printCity(City* _city)
{
	std::cout << "City info" << std::endl;
	std::cout << "Name: " << _city->getName() << std::endl;
	std::cout << "Id: " << _city->getId() << std::endl;
	std::cout << "Timezone: " << _city->getTimezone() << std::endl;
	std::cout << "Dt: " << _city->getDt() << std::endl;
	std::cout << "\n\n";
}