#include "Dog.hpp"

Dog::Dog(void) : AAnimal()
{
	this->type = "Dog";
	std::cout << "Constructor : \033[0;34m" << this->type << "\033[0m" << std::endl;
	this->_brain = new Brain();
	return;
}

Dog::Dog(Dog const &src) : AAnimal()
{
	std::cout << "Copy constructor : \033[0;34m" << src.type << "\033[0m" << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Destructor : \033[0;35m" << this->type << "\033[0m" << std::endl;
	delete this->_brain;
	return;
}

Brain *Dog::getBrain(void) const
{
	return this->_brain;
}

Dog &Dog::operator=(Dog const &rhs)
{
	this->type = rhs.getType();
	*this->_brain = *rhs.getBrain();

	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << " 🐶 Wouaf " << std::endl;
}
