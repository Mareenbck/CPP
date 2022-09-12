#include "Character.hpp"

Character::Character(void) : ICharacter()
{
	this->_name = "Default";
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
	std::cout << "Constructor :\033[0;34m " << this->_name << "\033[0m" << std::endl;
	return;
}

Character::Character(std::string name) : ICharacter()
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
	std::cout << "Constructor :\033[0;34m " << this->_name << "\033[0m" << std::endl;
	return;
}

Character::Character(Character const &src) : ICharacter()
{
	this->_name = src.getName() + "_copy";
	for (int i = 0; i < 4; i++)
		delete this->_items[i];
	for (int i = 0; i < 4; i++)
	{
		// Deep copy!
		if (src._items[i])
			this->_items[i] = src._items[i]->clone();
	}
	std::cout << "Copy constructor :\033[0;34m " << this->_name << "\033[0m" << std::endl;
}

Character::~Character(void)
{
	std::cout << "Destructor :\033[0;35m " << this->_name << "\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_items[i];
	return;
}

Character &Character::operator=(Character const &rhs)
{
	this->_name = rhs.getName() + "_copy";
	for (int i = 0; i < 4; i++)
		delete this->_items[i];
	for (int i = 0; i < 4; i++)
	{
		// Deep copy!
		if (rhs._items[i])
			this->_items[i] = rhs._items[i]->clone();
	}

	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	int i = 0;

	if (!m)
		return;
	while (this->_items[i] && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->_name << "'s equipment is full ! You can't equip more than 4 Materia" << std::endl;
		return;
	}
	this->_items[i] = m;
	std::cout << this->_name << " equipped materia " << m->getType() << " at position " << i << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return;
	std::cout << this->_name << " unequip Materia " << this->_items[idx] << " at position " << idx << std::endl;
	this->_items[idx] = NULL;
	return;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
		return;
	if (this->_items[idx])
		this->_items[idx]->use(target);
}
