#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(float const f_x, float const f_y);
		Point(const Point &old_object);
		~Point();

		Point&	operator=(const Point &other);

	private:
		Fixed const x;
		Fixed const y;
	
	friend bool bsp( Point const a, Point const b, Point const c, Point const point);
	
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif