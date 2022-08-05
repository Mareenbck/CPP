#include <iostream>
#include "Integer.hpp"

int main(void)
{
	Integer x(30);
	Integer y(10);
	Integer z(0);

	std::cout << "value of x : " << x << std::endl;
	std::cout << "value of y : " << y << std::endl;
	y = Integer(12);
	std::cout << "value of y : " << y << std::endl;

	std::cout << "value of z : " << z << std::endl;
	z = x + y;
	std::cout << "value of z : " << z << std::endl;

	return (0);
}
