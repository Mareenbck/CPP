#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	this->type = "AAnimal";
	std::cout << "Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;

	return;
}

AAnimal::AAnimal(AAnimal const &src)
{
	*this = src;
	std::cout << "Copy Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor : \033[0;35mAAnimal\033[0m" << std::endl;
	return;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	this->type = rhs.getType();

	return *this;
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}
