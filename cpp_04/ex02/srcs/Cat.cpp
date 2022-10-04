#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : AAnimal()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;
	return;
}

Cat::Cat(Cat const &src) : AAnimal()
{
	this->_brain = NULL;
	*this = src;
	std::cout << "Cat Copy constructor :\033[0;34m (" << src.type << ")\033[0m" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor :\033[0;35m " << this->type << "\033[0m" << std::endl;
	delete this->_brain;
	return;
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->type = rhs.getType();
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain();
	return *this;
}

Brain *Cat::getBrain(void) const
{
	return this->_brain;
}

void Cat::makeSound(void) const
{
	std::cout << " 🐱 Miaou " << std::endl;
}
