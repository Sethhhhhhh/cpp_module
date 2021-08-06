#include "Conversion.hpp"

Conversion::Conversion(std::string s) : _s(s) {
	return ;
}

Conversion::Conversion(const Conversion & src) {
	_s = src._s;

	return ;
}

Conversion::~Conversion() {
	return ;
}

Conversion &    Conversion::operator=(const Conversion & src) {
	_s = src._s;

	return (*this);
}

Conversion::operator char() const {
	double   c;

	c = 0;
	try {
		c = std::stod(_s);
		std::cout << c;
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (static_cast<char>(c));
}

Conversion::operator float() const {
	double   f;

	f = 0;
	try {
		f = std::stod(_s);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (static_cast<float>(f));
}

Conversion::operator double() const {
	double   d;

	d = 0;
	try {
		d = std::stod(_s);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (d);
}

Conversion::operator int() const {
	double   i;

	i = 0;
	try {
		i = std::stod(_s);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (static_cast<int>(i));
}