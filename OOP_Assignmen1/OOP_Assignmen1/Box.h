#pragma once
#include <string>
#include "Shape.h"

class Box : public Shape
{
private:

	int side;
public:
	Box(bool is_filled, std::string color, Point point, int userSide);
	~Box() override;

	int get_side() { return side; }

	
};
