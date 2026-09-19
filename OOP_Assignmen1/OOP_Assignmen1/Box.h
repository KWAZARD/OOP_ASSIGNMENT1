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

	int side;
public:
	Box(bool is_filled, std::string color, Point point, int userSide);
	~Box() override;

	int get_side() { return side; }

	
};
