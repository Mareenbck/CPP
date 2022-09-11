#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		Dog &operator=(Dog const &rhs);

		virtual void makeSound(void) const;
};

#endif
