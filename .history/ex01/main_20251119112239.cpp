#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed	const a(2.5f);

	a.toFloat();
	a.toInt();

	int x = 0;

	for (int i = 0; i < 1000; i++)
	{}
	return 0;
}