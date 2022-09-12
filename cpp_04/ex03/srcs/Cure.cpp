#include "Cure.hpp"

Cure::Cure(void) : AMateria()
{
	this->type = "cure";
	std::cout << "Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;
	return;
}

Cure::Cure(Cure const &src) : AMateria()
{
	std::cout << "Copy constructor :\033[0;34m " << src.type << "\033[0m" << std::endl;
	*this = src;
}

Cure::~Cure(void)
{
	std::cout << "Destructor :\033[0;35m " << this->type << "\033[0m" << std::endl;
	return;
}

Cure &Cure::operator=(Cure const &rhs)
{
	this->type = rhs.getType();

	return *this;
}

AMateria *Cure::clone() const
{
	std::cout << " >> Cure::clone" << std::endl;
	AMateria *clone = new Cure();
	return (clone);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds * " << std::endl;
}
