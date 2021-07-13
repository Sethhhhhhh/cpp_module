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

public:
	Karen();
	~Karen();
	void	complain(std::string level);

};

#endif