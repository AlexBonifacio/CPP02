#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	
	public:
		Fixed();
		Fixed(const Fixed &copy)
		~Fixed();

	private:
		int					fixed_point_value_;
		static const int 	fractional_bits = 8;
};

#endif
