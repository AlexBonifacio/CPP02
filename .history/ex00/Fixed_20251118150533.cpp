#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	raw = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &old_object)
{
	raw = old_object.raw;
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits( void )const
{
	return rawBits_;
}