#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->type = "AMateria";
	std::cout << "Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;

	return;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
	std::cout << "Copy Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "Destructor : \033[0;35mAMateria\033[0m" << std::endl;
	return;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	this->type = rhs.getType();

	return *this;
}

std::string const &AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* use Materia at " << target.getName();
	return;
}
