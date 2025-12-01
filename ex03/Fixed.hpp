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
		
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		Fixed	operator*(Fixed const &other) const;
		Fixed	operator/(Fixed const &other) const;
		Fixed	operator+(Fixed const &other) const;
		Fixed	operator-(Fixed const &other) const;

		Fixed&	operator++(); //++a
		Fixed	operator++(int); //a++
		Fixed&	operator--(); //--a
		Fixed	operator--(int); //a--

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static	Fixed& min(Fixed& a, Fixed& b);
		static	const Fixed& min(const Fixed& a, const Fixed& b);
		static	Fixed& max(Fixed& a, Fixed& b);
		static	const Fixed& max(const Fixed& a, const Fixed& b);

		bool	getErrorFlag() const;

	private:
		int					rawbits_;
		static const int 	fractional_bits_ = 8;
		bool				error_flag_;

};

std::ostream& operator<<(std::ostream &os, const Fixed &other);

#endif
