#ifndef __FIXE_HPP__
#define __FIXE_HPP__

#include <iostream>

class Fixed {

	public:
		Fixed(void);
		~Fixed();
		Fixed(Fixed const & src);

		Fixed &	operator=(Fixed const & src);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_n;
		static int const	_bits = 8;

};

#endif