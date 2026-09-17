#pragma once
class Point
{
private:
	int x;
	int y;
public:
	int get_x() const { return x; }
	int get_y() const { return y; }

	void set_x(int userX) { x = userX; }
	void set_y(int userY) { y = userY; }


};

