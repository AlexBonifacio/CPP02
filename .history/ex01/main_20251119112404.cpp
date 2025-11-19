#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed	const a(2.5f);

	a.toFloat();
	a.toInt();

	int x = 0;
	float y = 0.1;

	for (int i = 0; i < 1000; i++)
	{
		x += y;
	}

	std::cout << "x = " << x << '\n';
	return 0;
}