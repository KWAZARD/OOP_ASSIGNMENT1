#pragma once
class Point
{
private:
	int x = 0;
	int y = 0;
public:
	Point() = default;
	Point(int userX, int userY) : x(userX), y(userY) {}
	int get_x() const { return x; }
	int get_y() const { return y; }

	void set_x(int userX) { x = userX; }
	void set_y(int userY) { y = userY; }


};

