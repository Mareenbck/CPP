#ifndef SAMPLE_HPP
# define SAMPLE_HPP

# include <iostream>

class Sample
{
	public:
		Sample(void);
		Sample(int const n);
		Sample(Sample const & src);
		~Sample(void);

		Sample & operator=(Sample const & rhs);

		int getfoo(void) const;

	private:
		int _foo;
};

std::ostream & operator<<(std::ostream & o, Sample const & i);

#endif
