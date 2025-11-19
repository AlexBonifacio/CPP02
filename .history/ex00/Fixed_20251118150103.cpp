#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	fixed_point_value_ = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &old_object)
{
	fixed_point_value_ = old_object.
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

