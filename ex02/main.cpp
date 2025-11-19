#include <iostream>
#include "Fixed.hpp"

// int main( void ) 
// {
// 	Fixed	const a(2.5f);

// 	a.toFloat();
// 	a.toInt();



// 	float x = 0;
// 	float y = 0.1;
// 	for (int i = 0; i < 10000; i++)
// 	{
// 		x += y;
// 	}


// 	std::cout << "x = " << x << '\n';
// 	return 0;
// }

int main( void ) 
{
	Fixed a(12.3f);
	Fixed b(12.4f);

	std::cout << "a is " << a << "\n";
	std::cout << "b is " << b << "\n";

	// a < b == a.operator<(b)
	if (a < b)
	{
		std::cout << "a is less than b\n";
	}
	else
	{
		std::cout << "a is not less than b\n";
	}

	if (b > a)
	{
		std::cout << "b is greater than a\n";
	}
	else
	{
		std::cout << "b is not greater than a\n";
	}

	a = b;

	if (a <= b)
	{
		std::cout << "a is less than or equal to b\n";
	}
	else
	{
		std::cout << "a is not less than or equal to b\n";
	}

	if (a >= b)
	{
		std::cout << "a is greater than or equal to b\n";
	}
	else
	{
		std::cout << "a is not greater than or equal to b\n";
	}


	if (a == b)
	{
		std::cout << "a is equal to b\n";
	}
	else
	{
		std::cout << "a is not equal to b\n";
	}

	if (a != b)
	{
		std::cout << "a is different to b\n";
	}
	else
	{
		std::cout << "a is not different to b\n";
	}

	a = 2.6f;
	b = 2;

	Fixed c = a * b;
	std::cout << "a * b = " << c << '\n';

	std::cout << "c = " << c << '\n';
	std::cout << "b = " << b << '\n';
	
	c = c / b;
	std::cout << "c / b = " << c << '\n';

	return 0;
}
