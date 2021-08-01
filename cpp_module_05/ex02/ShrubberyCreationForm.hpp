#ifndef __SHRUBBERY_CREATION_FORM_HPP__
#define __SHRUBBERY_CREATION_FORM_HPP__

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm & operator=(const ShrubberyCreationForm &);
};

#endif