#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed	const a(2.5f);

	a.toFloat();
	a.toInt();



	float x = 0;
	float y = 0.1;
	for (int i = 0; i < 10000; i++)
	{
		x += y;
	}

	Fixed fx = 0;
	Fixed fy = 0.1;

	std::cout << "x = " << x << '\n';
	return 0;
}