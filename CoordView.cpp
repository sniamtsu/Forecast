#include"CoordView.hpp"
void CoordView::onCoordChanged(Coord* _coord, Action _action)
{
	std::cout <<"Coord changed" << std::endl;
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
	
	CoordView::printCoord(_coord);
}
void CoordView::printCoord(Coord* _coord)
{
	std::cout << "Coord info" << std::endl;
	std::cout << "Lat: " << _coord->getLat() << std::endl;
	std::cout << "Lon: " << _coord->getLon() << std::endl;
	std::cout << "\n\n";
}