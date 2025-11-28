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
        Fixed const &get_x(void) const;
        Fixed const &get_y(void) const;

	private:
		Fixed const x;
		Fixed const y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
