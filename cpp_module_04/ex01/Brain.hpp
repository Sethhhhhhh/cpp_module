#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <string>

class Brain {

private:
	std::string _ideas[100];

public:
	Brain(void);
	Brain(Brain const & src);
	~Brain();

	Brain & operator=(Brain const & src);

	void        setIdea(unsigned int index, std::string idea);
	std::string getIdea(unsigned int index) const;
};

#endif