#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(int const i);
	Fixed(float const f);
	Fixed(Fixed const &src);
	Fixed &operator=(Fixed const &rhs);
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int _fixed;
	static int const _fix;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
