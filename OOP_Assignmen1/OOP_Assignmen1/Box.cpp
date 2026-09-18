#include "Box.h"

Box::Box(bool is_filled, std::string color, Point point) : isFilled(is_filled), color(color), point(point)
{

}

Point Box::get_point() { return point; }
void Box::changeColor(std::string newColor)
{
	 color = newColor;
}
