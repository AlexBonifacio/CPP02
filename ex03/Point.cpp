#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	// std::cout << "Default constructor Point called\n";
}

Point::Point(float const f_x, float const f_y): x(f_x), y(f_y)
{
	// std::cout << "Float constructor Point called\n";
}

Point::Point(Point const &old_object) : x(old_object.x), y(old_object.y)
{
	// std::cout << "Copy constructor Point called\n";
}

Point::~Point() {}


Point&	Point::operator=(const Point &other)
{
	(void)other;
	return *this;
}
