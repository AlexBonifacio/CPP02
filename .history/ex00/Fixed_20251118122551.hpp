#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &other);
		~Fixed();

		int getRawBits( void ) const;
		

	private:
		int					fixed_point_value_;
		static const int 	fractional_bits_ = 8;
};

#endif
