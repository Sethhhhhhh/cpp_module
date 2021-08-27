#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

class Intern {

	private:
		std::string	_funcNames[3];

		Form *  _makeShrubberyCreation(std::string);
		Form *  _makeRobotomyRequest(std::string);
		Form *  _makePresidentialPardon(std::string);

	public:
		Intern(void);
		Intern(const Intern &);

		~Intern(void);
		Intern &    operator=(const Intern &);
		Form *      makeForm(std::string, std::string);

};

#endif