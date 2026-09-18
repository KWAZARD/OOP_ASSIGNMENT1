#pragma once
#include <string>
#include "Point.h"

class Shape
{
private:
	bool isFilled;
	std::string color;
	Point point;
public:
	void changeColor()
	{

	}
	
	virtual ~Shape() = default;
};

