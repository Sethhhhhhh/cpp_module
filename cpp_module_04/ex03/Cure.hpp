#ifndef __CURE_HPP__
#define __CURE_HPP__

#include <string>
#include "AMateria.hpp"

class Cure : public AMateria {

public:
    Cure(void);
    Cure(Cure const &);

    ~Cure(void);

    Cure &              operator=(Cure const &);

    virtual AMateria *  clone() const;
};

#endif