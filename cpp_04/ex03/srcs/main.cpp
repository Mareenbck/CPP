#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>
#include <iomanip>


int mandatory_tests()
{
	std::cout << "\033[1m...MANDATORY...\033[0m" << std::endl;
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}

int materia_tests()
{
	{
		std::cout << "\033[1m...AMATERIA ICE...\033[0m" << std::endl;
		AMateria *a = new Ice();
		Ice *b = new Ice();
		AMateria *c = new Ice(*b);
		AMateria *d;
		//d ne peut pas s'instancier seul donc clone le a
		d = a->clone();
		Character Emma("Emma");
		a->use(Emma);
		delete a;
		b->use(Emma);
		delete b;
		c->use(Emma);
		d->use(Emma);
		delete c;
		delete d;
	}
	std::cout << std::endl;
	{
		std::cout << "\033[1m...AMATERIA CURE...\033[0m" << std::endl;
		AMateria *a = new Cure();
		Cure *b = new Cure();
		AMateria *c = new Cure(*b);
		AMateria *d;
		// d ne peut pas s'instancier seul donc clone le a
		d = a->clone();
		Character Vikto("Vikto");
		a->use(Vikto);
		delete a;
		b->use(Vikto);
		delete b;
		c->use(Vikto);
		d->use(Vikto);
		delete c;
		delete d;
	}
	return 0;
}

int character_tests()
{
	{
		std::cout << "\033[1m...CHARACTER TESTS...\033[0m" << std::endl;
		ICharacter *Emma = new Character();
		Character *Vikto = new Character("Vikto");
		Character *Mehdi = new Character(*Vikto);
		Character *Garance = new Character();
		Character Jeanne("Jeanne");
		*Garance = *Vikto;
		std::cout << "Constructeur(void) Emma: " << Emma->getName() << std::endl;
		delete Emma;
		std::cout << "Constructeur(Vikto) Vikto : " << Vikto->getName() << std::endl;
		delete Vikto;
		std::cout << "Constructeur copy(Vikto) Mehdi: " << Mehdi->getName() << std::endl;
		delete Mehdi;
		std::cout << "Constructeur(void): Garance = Vikto " << Garance->getName() << std::endl;
		delete Garance;
		std::cout << "Constrcuteur stack Jeanne: " << Jeanne.getName() << std::endl;
	}
	std::cout << std::endl;
	{
		MateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		Character *Emma = new Character("Emma");
		Character *Vikto = new Character("Vikto");
		Emma->equip(src->createMateria("ice"));
		Emma->use(0, *Vikto);
		if (!src->createMateria("fire"))
			std::cout << "Create FAIL" << std::endl;
		AMateria *tmp;
		tmp = src->createMateria("ice");
		Emma->equip(tmp);
		Emma->unequip(1);
		Emma->equip(src->createMateria("ice"));
		Emma->equip(src->createMateria("cure"));
		Emma->equip(src->createMateria("cure"));
		Emma->equip(tmp);
		Emma->use(4, *Vikto);
		Emma->use(-1, *Vikto);
		delete tmp;
		delete Emma;
		delete Vikto;
		delete src;
	}

	return 0;
}

int deep_copy()
{
	std::cout << "\033[1m...DEEP COPY...\033[0m" << std::endl;
	std::cout << "\033[4m   MateriaSource   \033[0m" << std::endl;
	MateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Character *Emma = new Character("Emma");
	AMateria *tmp;
	MateriaSource srcCopy(*src);
	delete src;
	tmp = srcCopy.createMateria("ice");
	Emma->equip(tmp);
	tmp = srcCopy.createMateria("cure");
	Emma->equip(tmp);
	std::cout << std::endl;
	std::cout << "\033[4m   Character   \033[0m" << std::endl;
	ICharacter *Mehdi = new Character("Mehdi");
	std::cout << "plante ici" << std::endl;
	Character cp1(*Emma);
	delete Emma;
	cp1.use(0, *Mehdi);
	cp1.use(1, *Mehdi);
	delete Mehdi;
	return 0;
}

int main()
{
	materia_tests();
	std::cout << std::endl;
	character_tests();
	std::cout << std::endl;
	deep_copy();
	std::cout << std::endl;
	mandatory_tests();
	return 0;
}
