#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	
	public:
		Fixed();
		Fixed(const Fixed &old_object);
		Fixed(const int value);
		Fixed(const float value);
		Fixed&	operator=(const Fixed &other);
		~Fixed();
		
		bool	operator>(const Fixed &other);
		bool	operator<(const Fixed &other);
		bool	operator>=(const Fixed &other);
		bool	operator<=(const Fixed &other);
		bool	operator==(const Fixed &other);
		bool	operator!=(const Fixed &other);

		Fixed	operator*(Fixed const &other) const;
		Fixed	operator/(Fixed const &other) const;

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int					rawbits_;
		static const int 	fractional_bits_ = 8;
};

std::ostream& operator<<(std::ostream &os, const Fixed &other);

#endif
