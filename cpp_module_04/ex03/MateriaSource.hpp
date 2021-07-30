#ifndef __MATERIA_SOURCE_HPP__
#define __MATERIA_SOURCE_HPP__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

    private:
        AMateria *	_stock[4];

    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &);
        virtual ~MateriaSource(void);

        MateriaSource &		operator=(MateriaSource const &);
        void				learnMateria(AMateria *);
        AMateria *			createMateria(std::string const & type);

};

#endif
