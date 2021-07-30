#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
	private:
		size_t		index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		bool		b_setup;

	public:
		Contact();
		~Contact();
		void    setup(size_t index);
		void    show(void);
		void	show_column(void);
		bool	is_setup(void);
};

#endif