#include "Point.hpp"


/*
	AB -> AP
*/
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed ab = (b.x - a.x) * (point.y - a.y) - (b.y - a.y) * (point.x - a.x);
	Fixed bc = (c.x - b.x) * (point.y - b.y) - (c.y - b.y) * (point.x - b.x);
	Fixed ca = (a.x - c.x) * (point.y - c.y) - (a.y - c.y) * (point.x - c.x);

	std::cout << "ab = " << ab << ", bc = " << bc << ", ca = " << ca << '\n';

	if ((ab > 0 && bc > 0 && ca > 0) || (ab < 0 && bc < 0 && ca < 0))
	{
		return true;
	}
	else
		return false;
	
}
