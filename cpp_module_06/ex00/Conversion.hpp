#ifndef __CONVERSION_HPP__
#define __CONVERSION_HPP__

#include <string>
#include <iostream>
#include <exception>
#include <cctype>

class Conversion {

private:
	std::string _s;

	Conversion(void);

public:
	Conversion(std::string);
	Conversion(const Conversion &);
	~Conversion(void);

	Conversion & operator=(const Conversion &);

	operator int() const;
	operator float() const;
	operator double() const;
	operator char() const;

//	class LimitExeception : public std::exception {
//		public:
//
//	};
};

#endif