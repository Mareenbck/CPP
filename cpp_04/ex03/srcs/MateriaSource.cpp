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
	{
		if (this->_stock[i])
			delete this->_stock[i];
	}
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
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i] == NULL)
		{
			std::cout << "\033[0;31mLearned\033[0m materia " << m->getType() << " at position " << i << std::endl;
			this->_stock[i] = m;
			return ;
		}
		if (i >= 4)
		{
			std::cout << "Memory is full ! You can't add more than 4 Materia" << std::endl;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_stock[i] && this->_stock[i]->getType() == type)
		{
			std::cout << "\033[0;31mCreated\033[0m materia " << this->_stock[i]->getType() << " at position " << i << std::endl;
			return this->_stock[i]->clone();
		}
	}
	return (NULL);
}
