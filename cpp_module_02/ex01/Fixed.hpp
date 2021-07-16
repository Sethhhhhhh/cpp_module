#ifndef __FIXE_HPP__
#define __FIXE_HPP__

#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const & src);
	~Fixed();

	Fixed &	operator=(Fixed const & src);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;

private:
	int					_n;
	static int const	_bits = 8;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & src);

#endif