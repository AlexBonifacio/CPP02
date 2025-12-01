#include <iostream>
#include "Fixed.hpp"


// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }

int main( void ) 
{
	// Fixed	const a(2.5f);

	// a.toFloat();
	// a.toInt();



	// float x = 0;
	// float y = 0.1;
	// for (int i = 0; i < 10000; i++)
	// {
	// 	x += y;
	// }


	// std::cout << "x = " << x << '\n';

	Fixed d(1);
	Fixed f(2);
	Fixed c = f / d;
	Fixed e = c + d;

	std::cout << 'c ' << c << '\n';
	std::cout << c-- << '\n';
	std::cout << c << '\n';
	return 0;
}

// int main( void ) 
// {
// 	Fixed a(1.006f);
// 	Fixed b(12.4f);

// 	std::cout << "a is " << a << "\n";
// 	std::cout << "b is " << b << "\n";

// 	std::cout << std::endl;
// 	// a < b == a.operator<(b)
// 	if (a < b)
// 	{
// 		std::cout << "a is less than b\n";
// 	}
// 	else
// 	{
// 		std::cout << "a is not less than b\n";
// 	}

// 	if (b > a)
// 	{
// 		std::cout << "b is greater than a\n";
// 	}
// 	else
// 	{
// 		std::cout << "b is not greater than a\n";
// 	}

// 	a = b;

// 	if (a <= b)
// 	{
// 		std::cout << "a is less than or equal to b\n";
// 	}
// 	else
// 	{
// 		std::cout << "a is not less than or equal to b\n";
// 	}

// 	if (a >= b)
// 	{
// 		std::cout << "a is greater than or equal to b\n";
// 	}
// 	else
// 	{
// 		std::cout << "a is not greater than or equal to b\n";
// 	}



// 	std::cout << std::endl;
// 	if (a == b)
// 	{
// 		std::cout << "a is equal to b\n";
// 	}
// 	else
// 	{
// 		std::cout << "a is not equal to b\n";
// 	}

// 	if (a != b)
// 	{
// 		std::cout << "a is different to b\n";
// 	}
// 	else
// 	{
// 		std::cout << "a is not different to b\n";
// 	}

// 	std::cout << std::endl;

// 	a = 2.6f;
// 	b = 2;

// 	Fixed c = a * b;
// 	std::cout << std::endl;

// 	std::cout << "a * b = " << c << '\n';
// 	std::cout << "c = " << c << '\n';
// 	std::cout << "b = " << b << '\n';
	
// 	std::cout << std::endl;
// 	b= 0;
// 	Fixed d = c / b;
// 	std::cout << "d / b = " << d << '\n';
// 	std::cout << std::endl;

// 	a = 0;

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;

// 	a = 0.5f;
// 	b = 1.5f;
// 	std::cout << "\ntest de min\n";
// 	std::cout << Fixed::min(a, b) << '\n';

// 	std::cout << "\ntest de max\n";
// 	std::cout << Fixed::max(a, b) << "\n\n";

// 	return 0;
// }
