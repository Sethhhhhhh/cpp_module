#ifndef __FIXE_HPP__
#define __FIXE_HPP__

#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const &);
	~Fixed();

	Fixed &	operator=(Fixed const & src);

	bool	operator >(const Fixed & src) const;
	bool	operator <(const Fixed & src) const;
	bool	operator >=(const Fixed & src) const;
	bool	operator <=(const Fixed & src) const;
	bool	operator ==(const Fixed & src) const;
	bool	operator !=(const Fixed & src) const;

	Fixed	operator +(const Fixed & src) const;
	Fixed	operator -(const Fixed & src) const;
	Fixed	operator *(const Fixed & src) const;
	Fixed	operator /(const Fixed & src) const;
	Fixed &	operator ++(void);
	Fixed &	operator --(void);
	Fixed	operator ++(int);
	Fixed	operator --(int);

	int						getRawBits(void) const;
	void					setRawBits(int const raw);
	int						toInt(void) const;
	float					toFloat(void) const;
	static const Fixed &	min(const Fixed & a, const Fixed & b);
	static const Fixed &	max(const Fixed & a, const Fixed & b);

private:
	int					_n;
	static int const	_bits = 8;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & src);

#endif