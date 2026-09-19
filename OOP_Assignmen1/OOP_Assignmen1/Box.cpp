#include "Box.h"

Box::Box(bool is_filled, std::string color, Point point, int userSide) 
	: Shape(is_filled, color, point), side(userSide)
{

}
Box::~Box()
{

}

