#include"WindView.hpp"
#include<string>
void WindView::onWindChanged(Wind* _wind, Action _action)
{
	std::cout << "Wind changed" << std::endl;
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

	WindView::printWind(_wind);
}
void WindView::printWind(Wind* _wind)
{
	std::cout << "Wind info" << std::endl;
	std::cout << "Speed: " << _wind->getSpeed() << std::endl;
	std::cout << "Deg: " << _wind->getDeg() << std::endl;
	std::cout << "\n\n";
}