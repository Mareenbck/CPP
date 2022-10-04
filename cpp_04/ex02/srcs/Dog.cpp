#include "Dog.hpp"

Dog::Dog(void) : AAnimal()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Constructor : \033[0;34m" << this->type << "\033[0m" << std::endl;
	return;
}

Dog::Dog(Dog const &src) : AAnimal()
{
	this->_brain = NULL;
	*this = src;
	std::cout << "Dog Copy constructor : \033[0;34m" << src.type << "\033[0m" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor : \033[0;35m" << this->type << "\033[0m" << std::endl;
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
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain();

	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << " 🐶 Wouaf " << std::endl;
}
