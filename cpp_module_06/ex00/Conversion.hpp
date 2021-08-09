#ifndef __CONVERSION_HPP__
#define __CONVERSION_HPP__

#include <string>
#include <iostream>
#include <exception>
#include <limits>

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

	class Error : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Impossible");
			}
	};
	class  NotDisplayable : public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Non displayable");
			}
	};
};

#endif