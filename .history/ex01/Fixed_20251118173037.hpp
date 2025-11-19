#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	
	public:
		Fixed();
		Fixed(const Fixed &old_object);
		Fixed(const int fpv);
		Fixed(const float)
		Fixed &operator=(const Fixed &other);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int					rawbits_;
		static const int 	fractional_bits_ = 8;
};

#endif
