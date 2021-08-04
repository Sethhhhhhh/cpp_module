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
	int n;

	n = 0;
	try {
		n = std::stoi(_s);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return (n);
}

Conversion::operator float() const {
	float   f;

	f = 0;
	try {
		f = static_cast<float>(std::stof(_s));
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return (f);
}

Conversion::operator double() const {
	double d;

	d = 0;
	try {
		d = std::stod(_s);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return (d);
}

Conversion::operator int() const {
	int n;

	n = 0;
	try {
		n = std::stoi(_s);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return (n);
}