#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
	this->type = "ice";
	std::cout << "Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;
	return;
}

Ice::Ice(Ice const &src) : AMateria()
{
	std::cout << "Copy constructor :\033[0;34m " << src.type << "\033[0m" << std::endl;
	*this = src;
}

Ice::~Ice(void)
{
	std::cout << "Destructor :\033[0;35m " << this->type << "\033[0m" << std::endl;
	return;
}

Ice &Ice::operator=(Ice const &rhs)
{
	this->type = rhs.getType();

	return *this;
}

AMateria *Ice::clone() const
{
	AMateria *clone = new Ice();
	return (clone);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
