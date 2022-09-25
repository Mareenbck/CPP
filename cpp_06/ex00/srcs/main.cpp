#include <iostream>
#include <string>
#include <cctype>
#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "The number of argument values is not correct." << std::endl;
		return (1);
	}

	std::cout << std::fixed;
	std::cout.precision(1);

	char *target = argv[1];
	Convert convert(target);

	convert.toChar();
	convert.toInt();
	convert.toFloat();
	convert.toDouble();

	return (0);
}
