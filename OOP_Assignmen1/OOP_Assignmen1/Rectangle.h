#pragma once
#include <string>
#include "Shape.h"

class Rectangle : public Shape
{
private:

	int height;
	int width;
public:
	Rectangle(bool is_filled, std::string color, Point point, int userWidth, int userHeight);
	~Rectangle() override;

	int get_height();
	int get_width();

};

