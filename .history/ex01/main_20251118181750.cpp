#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed	const a(2.5f);

	a.toFloat();
	a.toInt();
	return 0;
}