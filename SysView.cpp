#include"SysView.hpp"
#include<string>
void SysView::onSysChanged(Sys* _sys, Action _action)
{
	std::cout << "Sys changed" << std::endl;
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

	SysView::printSys(_sys);
}
void SysView::printSys(Sys* _sys)
{
	std::cout << "Sys info" << std::endl;
	std::cout << "Type: " << _sys->getType() << std::endl;
	std::cout << "Id: " << _sys->getId() << std::endl;
	std::cout << "Message: " << _sys->getMessage() << std::endl;
	std::cout << "Country: " << _sys->getCountry() << std::endl;
	std::cout << "Sunrise: " << _sys->getSunrise() << std::endl;
	std::cout << "Sunset: " << _sys->getSunset() << std::endl;
	std::cout << "\n\n";
}