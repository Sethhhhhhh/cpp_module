#ifndef __ICE_HPP__
#define __ICE_HPP__

#include <string>
#include "AMateria.hpp"
// #include "ICharacter.hpp"

class Ice : public AMateria {

    public:
        Ice(void);
        Ice(Ice const &);
        virtual ~Ice(void);

        Ice &		operator=(Ice const &);
        AMateria *	clone() const;
        void		use(ICharacter & target);
};

#endif
