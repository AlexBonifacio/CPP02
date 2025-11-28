#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main(void){
	Point a;
	Point b(10, 0);
	Point c(0, 10);

	/* Inside */
	Point p1(1.0f, 1.0f); 

	Point p2(2.0f, 3.0f); 

	Point p3(3.0f, 2.0f);

	Point p4(4.0f, 1.0f);

	Point p5(1.0f, 4.0f);

	/* Outside */
	Point p6(5.0f, 5.0f);
	Point p7(-1.0f, -1.0f);
	Point p8(10.0f, 10.0f);
	// Point p9(p8);

	if (bsp(a,b,c,p6))
	{
		std::cout << "point is inside\n";
	}
	else
		std::cout << "point is outside\n";
	
	if (bsp(a,b,c,p7))
	{
		std::cout << "point is inside\n";
	}
	else
		std::cout << "point is outside\n";
	
	if (bsp(a,b,c,p8))
	{
		std::cout << "point is inside\n";
	}
	else
		std::cout << "point is outside\n";
}

// int main( void ) 
// {
// 	Fixed a(1.006f);
// 	Fixed b(12.4f);

// 	std::cout << "a is " << a << "\n";
// 	std::cout << "b is " << b << "\n";

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

// 	a = 2.6f;
// 	b = 2;

// 	Fixed c = a * b;
// 	std::cout << "a * b = " << c << '\n';

// 	std::cout << "c = " << c << '\n';
// 	std::cout << "b = " << b << '\n';
	
// 	b= 0;
// 	Fixed d = c / b;
// 	std::cout << "d / b = " << d << '\n';

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
// 	std::cout << Fixed::max(a, b) << '\n';

// 	return 0;
// }
