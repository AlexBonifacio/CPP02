#include "Fixed.hpp"
#include <cmath> //roundf

Fixed::Fixed() : rawbits_(0), error_flag_(false)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &old_object)
{
	std::cout << "Copy constructor called\n";
	*this = old_object;
}

/* 
	Conversion int to fixed point
	rawbits = value * 2^fractional_bits_ 
*/
Fixed::Fixed(const int value)  
	: rawbits_(value << fractional_bits_), error_flag_(false)
{
	std::cout << "Int constructor called\n";
}

/*
	floats can't be bitshifts
*/
Fixed::Fixed(const float value) 
	: rawbits_(roundf(value * (1 << fractional_bits_))) , error_flag_(false)
{
	std::cout << "Float constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignement operator called\n";
	if (this != &other)
	{
		this->rawbits_ = other.getRawBits();
		this->error_flag_ = other.error_flag_;
	}
	
	return *this;
}

/*
	Comparison operators  
*/

bool	Fixed::operator>(const Fixed &other) const
{
	return this->rawbits_ > other.rawbits_;
}

bool	Fixed::operator<(const Fixed &other) const
{
	return this->rawbits_ < other.rawbits_;
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return this->rawbits_ >= other.rawbits_;
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return this->rawbits_ <= other.rawbits_;
}

bool	Fixed::operator==(const Fixed &other) const
{
	return this->rawbits_ == other.rawbits_;
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return this->rawbits_ != other.rawbits_;
}

/*
	Comparison operators end
*/

/*
	Arithmetic operators
*/

Fixed	Fixed::operator*(Fixed const &other) const
{
	Fixed	result;
	
	long tmp = static_cast<long>(this->rawbits_) * static_cast<long>(other.rawbits_);

	tmp = tmp >> fractional_bits_; // /256
	result.rawbits_ = static_cast<int>(tmp);
	
	return result;
}


// result.rawbits_ = (A/B)*256 -> (A*256)/B

Fixed	Fixed::operator/(Fixed const &other) const
{
	Fixed result;

	if (other.rawbits_ == 0)
	{
		std::cout << "Error: Division by zero\n";
		result.error_flag_ = true;
		return result;
	}

	result.rawbits_ = (this->rawbits_ << fractional_bits_) / other.rawbits_; // (A*256)/B

	return result;
}

Fixed	Fixed::operator+(Fixed const &other) const
{
	Fixed result;

	result.rawbits_ = this->rawbits_ + other.rawbits_;

	return result;
}

Fixed	Fixed::operator-(Fixed const &other) const
{
	Fixed result;

	result.rawbits_ = this->rawbits_ - other.rawbits_;
	
	return result;
}

/*
	Arithmetic operators end
*/

/*
	Increment operators
*/

Fixed&	Fixed::operator++()
{
	this->rawbits_ = this->rawbits_ + 1;

	return *this;
}

/* Call the copy constructor to copy error_flag state too*/
Fixed	Fixed::operator++(int)
{
	Fixed result(*this);

	result.rawbits_ = this->rawbits_;
	this->rawbits_ += 1;
	return result;
 }

Fixed&	Fixed::operator--()
{
	this->rawbits_ = this->rawbits_ - 1;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed result(*this);

	result.rawbits_ = this->rawbits_;
	this->rawbits_ -= 1;
	return result;
}

/*
	Increment operators end
*/

/*
	Comparison function
*/

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.rawbits_ < b.rawbits_)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.rawbits_ < b.rawbits_)
		return a;
	return b;
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.rawbits_ > b.rawbits_)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.rawbits_ > b.rawbits_)
		return a;
	return b;	
}
/*
	Comparison function end
*/


float	Fixed::toFloat(void) const
{
	float to_float;

	to_float = static_cast<float>(rawbits_) / (1 << fractional_bits_);
	return to_float;
}

int		Fixed::toInt(void) const
{
	int to_int;
	
	to_int = rawbits_ / (1 << fractional_bits_);
	return to_int;
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

bool	Fixed::get_errorflag(void) const
{
	return this->error_flag_;
}

/*
	std::cout << a == operator<<(std::cout, a)
*/
std::ostream& operator<<(std::ostream &os, const Fixed &other)
{
	if (!other.get_errorflag()) 
	{
		os << other.toFloat();
	}
	else
	{
		os << "NaN";
	}
	return os;
}
