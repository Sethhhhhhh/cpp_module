#ifndef __SHRUBBERY_CREATION_FORM_HPP__
#define __SHRUBBERY_CREATION_FORM_HPP__

#include "Form.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form {

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &);
		void    execute(const Bureaucrat & executor) const;

};

#endif