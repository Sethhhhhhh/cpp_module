#ifndef __IMATERIA_SOURCE_HPP
#define __IMATERIA_SOURCE_HPP

class IMateriaSource {
	
	public:
		virtual				~IMateriaSource() {}
		virtual void		learnMateria(AMateria *) = 0;
		virtual AMateria *	createMateria(std::string const & type) = 0;
};

#endif
