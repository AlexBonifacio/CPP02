#include "Fixed.hpp"
#include <iostream>
#include <cmath> //roundf

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

/* 
	Conversion int to fixed point
	rawbits = value * 2^fractional_bits_ 
*/
Fixed::Fixed(const int value) 
	: rawbits_(value << fractional_bits_)
{
	std::cout << "Int constructor called\n";
}

/*
	floats can't be bitshifts
*/
Fixed::Fixed(const float value) 
	: rawbits_(roundf(value * (1 << fractional_bits_)))
{
	std::cout << "Float constructor called\n";
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

float	Fixed::toFloat(void) const
{
	float floater;

	floater = static_cast<float>(rawbits_) / (1 << fractional_bits_);
	std::cout << "floater = " << floater << '\n';
	return floater;
}

int		Fixed::toInt(void) const
{
	int inter;
	
	inter = rawbits_ / 256;
	std::cout << "inter = " << inter << '\n';
	return inter;
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

std::ostream& operator<<(std::ostream &os, const Fixed &other)
{
	os << other.get
}