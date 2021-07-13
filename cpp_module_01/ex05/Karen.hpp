#ifndef __KAREN_HPP__
#define __KAREN_HPP__

#include <iostream>
#include <string>

class Karen {

private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	(Karen::*f[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

public:
	Karen();
	~Karen();
	void	complain(std::string level);
	std::string const	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

};

#endif