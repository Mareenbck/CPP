#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		~MateriaSource(void);

		MateriaSource &operator=(MateriaSource const &rhs);

		virtual void learnMateria(AMateria *);
		virtual AMateria *createMateria(std::string const &type);

	private:
		AMateria *_stock[4];
};

#endif
