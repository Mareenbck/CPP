#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(Cat const &src);
		~Cat(void);

		Cat &operator=(Cat const &rhs);

		Brain *getBrain(void) const;

		virtual void makeSound(void) const;

	private:
		Brain *_brain;
};

#endif
