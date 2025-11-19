#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	
	public:
		Fixed();

	private:
		int	fixed_point_value_;
		static const int fraction_bits;
};

#endif
