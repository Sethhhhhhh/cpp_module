#ifndef __ROBOTOMY_REQUEST_FORM_HPP__
#define __ROBOTOMY_REQUEST_FORM_HPP__

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form {

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &);
		~RobotomyRequestForm(void);

		RobotomyRequestForm & operator=(const RobotomyRequestForm &);
		void    execute(const Bureaucrat & executor) const;
};

#endif