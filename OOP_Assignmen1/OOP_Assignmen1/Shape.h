#pragma once
#include <string>
#include "Point.h"

class Shape
{
protected:
	bool isFilled;
	std::string color;
	Point point;
public:

	Shape(bool is_filled, std::string color, Point point)
		: isFilled(is_filled), color(color), point(point) {}

	void changeColor(std::string newColor)
	{
		color = newColor;
	}
	
	bool get_isFilled() { return isFilled; }
	std::string get_color() { return color; }
	Point get_point() { return point; }

	virtual ~Shape() = default;
};

