#include "Fixed.hpp"

/* Constructor function(s) */

Fixed::Fixed(void) : _n(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const n) : _n(n << _bits) {
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float const f) : _n((int)round(f * (1 << _bits))) {
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	_n = src.getRawBits();
	return;
}

/* Destructor function */

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

/* Get & Set functions */

int	Fixed::getRawBits(void) const {
	return (this->_n); 
}

void	Fixed::setRawBits(int const raw) {
	this->_n = raw;
	return ; 
}

/* Conversion functions */

int		Fixed::toInt(void) const {
	return (_n >> _bits);
}

float	Fixed::toFloat(void) const {
	return (_n / float(1 << _bits));
}

/* Operators functions */

Fixed & Fixed::operator=(Fixed const & src) {
	_n = src.getRawBits();
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & src) {
	o << src.toFloat();
	return o;
}