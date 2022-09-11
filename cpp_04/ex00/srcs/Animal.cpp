#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;

	return;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "Copy Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor : \033[0;35mAnimal\033[0m" << std::endl;
	return;
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->type = rhs.getType();

	return *this;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << " 🐾 ANIMAL " << std::endl;
}
