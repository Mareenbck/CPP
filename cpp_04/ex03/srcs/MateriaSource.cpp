#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_stock[i] = NULL;
	std::cout << "Constructor :\033[0;34m MateriaSource \033[0m" << std::endl;
	return;
}

MateriaSource::MateriaSource(MateriaSource const &src) : IMateriaSource()
{
	std::cout << "Copy constructor :\033[0;34m MateriaSource \033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_stock[i] = NULL;
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "Destructor :\033[0;35m MateriaSource \033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i])
			delete this->_stock[i];
	}
	return;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
		delete this->_stock[i];
	for (int i = 0; i < 4; i++)
	{
		// Deep copy!
		if (rhs._stock[i])
			this->_stock[i] = rhs._stock[i]->clone();
	}

	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	if (!m)
		return;
	while (this->_stock[i] && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Memory is full ! You can't add more than 4 Materia" << std::endl;
		return;
	}
	this->_stock[i] = m;
	std::cout << "Stock materia " << m->getType() << " at position " << i << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_stock[i])
			return (NULL);
		if (this->_stock[i]->getType() == type)
		{
			this->_stock[i]->clone();
			std::cout << "Created <" << this->_stock[i]->getType() << "> material on storage slot [ " << i << " ]" << std::endl;
			return this->_stock[i];
		}
	}
	return (NULL);
}
