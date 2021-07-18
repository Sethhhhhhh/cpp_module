#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <string>

class Brain {

public:
    Brain(void);
    Brain(Brain const & src);
    ~Brain();

    Brain & operator=(Brain const & src);
    void    makeSound(void) const;
    std::string getType(void) const;

    std::string ideas[100];
};

#endif