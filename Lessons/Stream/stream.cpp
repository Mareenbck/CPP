#include <iostream>

int main(void)
{
	char buff[512];

	std::cout << "Hello Wold !" << std::endl;
	std::cout << "Input World :" ;
	std::cin >> buff;
	std::cout << "Enterred [" << buff << "]" << std::endl;

	return 0;
}
