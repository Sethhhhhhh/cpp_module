#ifndef __PRESIDENTIAL_PARDON_FORM_HPP__
#define __PRESIDENTIAL_PARDON_FORM_HPP__

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form {

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &);
		~PresidentialPardonForm(void);

		PresidentialPardonForm & operator=(const PresidentialPardonForm &);
		void    execute(const Bureaucrat & executor) const;
};

#endif