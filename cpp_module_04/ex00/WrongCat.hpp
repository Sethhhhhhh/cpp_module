#ifndef __WRONG_CAT_HPP__
#define __WRONG_CAT_HPP__

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal {

protected:
    std::string type;

public:
    WrongCat(void);
    WrongCat(WrongCat const & src);
    ~WrongCat();

    WrongCat & operator=(WrongCat const & src);
};

#endif