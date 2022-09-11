#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		Dog &operator=(Dog const &rhs);

		Brain *getBrain(void) const;

		virtual void makeSound(void) const;

	private:
		Brain *_brain;
};

#endif
