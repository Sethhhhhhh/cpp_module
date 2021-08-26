#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <cstdlib> 
#include <ctime>
#include <iostream>

class Brain {

private:
	std::string _ideas[100];

public:
	Brain(void);
	Brain(Brain const & src);
	~Brain();

	Brain & operator=(Brain const & src);

	void        setIdea(unsigned int index, std::string idea);
	void		printIdeas(void) const;
	std::string getIdea(unsigned int index) const;
};

#endif