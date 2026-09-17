#pragma once
#include "Shape.h"

class Box : public Shape
{
private:
	bool isFilled;
	std::string color;
	Point point;

	int length;
	int width;
public:
	void drawShape() override
	{
		
	}
};

