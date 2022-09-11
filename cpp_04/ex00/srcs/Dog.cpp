#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	std::cout << "Constructor : \033[0;34m" << this->type << "\033[0m" << std::endl;
	return;
}

Dog::Dog(Dog const &src) : Animal()
{
	std::cout << "Copy constructor : \033[0;34m" << src.type << "\033[0m" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Destructor : \033[0;35m" << this->type << "\033[0m" << std::endl;
	return;
}

Dog &Dog::operator=(Dog const &rhs)
{
	this->type = rhs.getType();

	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << " 🐶 Wouaf " << std::endl;
}
