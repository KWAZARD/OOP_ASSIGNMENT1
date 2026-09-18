#pragma once
#include <string>
#include "Point.h"
#include "Shape.h"

class Box : public Shape
{
private:
	bool isFilled;
	std::string color;
	Point point;
public:
	Box(bool is_filled, std::string color, Point point);
	~Box() override;

	Point get_point();
	void changeColor(std::string newColor);
	
	
};
