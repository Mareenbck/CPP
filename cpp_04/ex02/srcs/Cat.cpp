#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : AAnimal()
{
	this->type = "Cat";
	std::cout << "Constructor :\033[0;34m " << this->type << "\033[0m" << std::endl;
	this->_brain = new Brain();
	return;
}

Cat::Cat(Cat const &src) : AAnimal()
{
	std::cout << "Copy constructor :\033[0;34m (" << src.type << ")\033[0m" << std::endl;
	this->_brain = new Brain();
	*this = src;
	// METTRE BRAIN DANS CONSTRUCTEUR PAR COPIE

}

Cat::~Cat(void)
{
	std::cout << "Destructor :\033[0;35m " << this->type << "\033[0m" << std::endl;
	delete this->_brain;
	return;
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->type = rhs.getType();
	*this->_brain = *rhs.getBrain();

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
