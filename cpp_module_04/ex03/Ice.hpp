#ifndef __ICE_HPP__
#define __ICE_HPP__

#include <string>
#include "AMateria.hpp"
// #include "ICharacter.hpp"

class Ice : public AMateria {

public:
    Ice(void);
    Ice(Ice const &);

    ~Ice(void);

    Ice &               operator=(Ice const &);

    virtual AMateria *  clone() const;
};

#endif
