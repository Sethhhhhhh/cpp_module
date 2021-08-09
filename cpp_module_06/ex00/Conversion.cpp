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

	if (!_s.compare("nanf") || !_s.compare("nan"))
		throw Error();
	c = std::stod(_s);
	if (c < std::numeric_limits<int>::min() || c > std::numeric_limits<int>::max())
		throw Error();
	else if (c < 32 || c > 126)
		throw NotDisplayable();
	return (static_cast<char>(c));
}

Conversion::operator float() const {
	double   f;

	f = std::stod(_s);
	return (static_cast<float>(f));
}

Conversion::operator double() const {
	double   d;

	d = std::stod(_s);
	return (d);
}

Conversion::operator int() const {
	double   i;

	if (!_s.compare("nanf") || !_s.compare("nan"))
		throw Error();
	i = std::stod(_s);
	if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
		throw Error();
	return (static_cast<int>(i));
}