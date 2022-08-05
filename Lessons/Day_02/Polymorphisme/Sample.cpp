#include <iostream>
#include <Sample.hpp>

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void Sample::bar(char const c) const
{
	std::cout << "bar called with char overload : " << c << std::endl;
}

void Sample::bar(int const n) const
{
	std::cout << "bar called with int overload : " << n << std::endl;
}

void Sample::bar(float const z) const
{
	std::cout << "bar called with float overload : " << z << std::endl;
}

void Sample::bar(Sample const & i) const
{
	(void) i;
	std::cout << "bar called with Sample overload : " << std::endl;
}
