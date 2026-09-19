#include "Rectangle.h"

Rectangle::Rectangle(bool is_filled, std::string color, Point point, int userWidth, int userHeight)
	: Shape(is_filled, color, point), height(userHeight), width(userWidth)
{

}
int Rectangle::get_height() { return height; }
int Rectangle::get_width() { return width; }
Rectangle::~Rectangle()
{

}