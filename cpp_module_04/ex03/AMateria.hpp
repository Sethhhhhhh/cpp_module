#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

protected:
    AMateria(void);
    std::string _type;

public:
    AMateria(std::string const & type);
    AMateria(AMateria const &);

    ~AMateria(void);

    AMateria &          operator=(AMateria const &);

    std::string const & getType() const;
    virtual AMateria *  clone() const = 0;
    virtual void        use(ICharacter& target);

};


#endif
