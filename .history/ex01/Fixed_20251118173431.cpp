#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	rawbits_ = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &old_object)
{
	std::cout << "Copy constructor called\n";
	this->rawbits_ = old_object.getRawBits();
}

/* rawbits = value * 2^*/
Fixed::Fixed(const int value) : rawbits_(value << fractional_bits_)
{}

Fixed::Fixed(const float value)
{

}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignement operator called\n";
	if (this != &other)
	{
		this->rawbits_ = other.getRawBits();
	}
	
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}


int	Fixed::getRawBits( void )const
{
	std::cout << "getRawBits member function called\n";

	return this->rawbits_;
}

void	Fixed::setRawBits(int const raw)
{
	this->rawbits_ = raw;
}