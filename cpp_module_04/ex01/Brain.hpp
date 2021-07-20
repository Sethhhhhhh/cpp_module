#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <string>

class Brain {

protected:
	std::string _ideas[100];

public:
	Brain(void);
	Brain(Brain const & src);
	~Brain();

	Brain & operator=(Brain const & src);

	void        setIdea(int const index, std::string idea);
	std::string getIdea(int const index) const;
};

#endif