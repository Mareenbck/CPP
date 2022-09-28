/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbascuna <mbascuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:42:04 by mbascuna          #+#    #+#             */
/*   Updated: 2022/09/28 11:10:17 by mbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template<typename T>
void print(T const &element)
{
	std::cout << element << " ";
}

template<typename T>
T multi(T &number)
{
	number *= 10;
	return number;
}

template<typename T>
T upper(T &character)
{
	if (character >= 'a' && character <= 'z')
		character -= 32;
	return character;
}

int main (void)
{
	int tab[] = {2, 5, 1};
	char stab[] = "Salut";
	Awesome tab2[5];


	std::cout << std::endl;
	std::cout << "******* TAB INT *******" << std::endl << std::endl;;
	iter(tab, 3, print<int>);
	iter(tab, 3, multi<int>);
	std::cout << std::endl << "multi >>  ";
	iter(tab, 3, print<int>);
	std::cout << std::endl << std::endl;
	std::cout << "******* STRING ********" << std::endl << std::endl;
	iter(stab, 5, print<char>);
	iter(stab, 5, upper<char>);
	std::cout << std::endl << "upper >>  ";
	iter(stab, 5, print<char>);
	std::cout << std::endl << std::endl;
	std::cout << "******** CLASS ********" << std::endl << std::endl;
	iter(tab2, 5, print<Awesome>);
	std::cout << std::endl << std::endl;
	std::cout << "***********************" << std::endl << std::endl;

	return 0;
}
