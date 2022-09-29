#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>

class NotFindException : public std::exception
{
	public:
		virtual const char *what(void) const throw(){
			return ("is not in range");
		}
};

template<typename T>
typename T::iterator easyfind(T &tab, int i)
{
	typename T::iterator it;

	it = std::find(tab.begin(), tab.end(), i);
	if (it == tab.end())
		throw NotFindException();
	return it;
}

#endif
