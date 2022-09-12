#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria(void);
		AMateria(AMateria const &src);
		virtual ~AMateria(void);

		AMateria &operator=(AMateria const &rhs);

		std::string const &getType() const; // Returns the materia type

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
