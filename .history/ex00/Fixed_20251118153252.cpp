#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	rawbits_ = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &old_object) : rawbits_(old_object.rawbits_)
{
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &other)
{
	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}


int	Fixed::getRawBits( void )const
{
	std::cout << "getRawBits member function called\n";

	return rawbits_;
}

void	Fixed::setRawBits(int const raw)
{
	this->rawbits_ = raw;
}