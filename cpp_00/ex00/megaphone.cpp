#include <iostream>

int main (int ac, char **av)
{
	int	i;
	int j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; av[i]; i++) {
			for (j = 0; av[i][j]; j++) {
				av[i][j] = toupper(av[i][j]);
				std::cout << av[i][j];
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
