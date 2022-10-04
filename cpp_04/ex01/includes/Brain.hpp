#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const &src);
		~Brain(void);

		Brain &operator=(Brain const &rhs);

		std::string const *getIdeas(void) const;

	private:
		std::string ideas[100];

};

#endif
