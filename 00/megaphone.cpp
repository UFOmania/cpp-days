#include <iostream>
#include <string.h>

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	std::string input(av[1]);
	std::string::iterator it;

	for(it = input.begin(); it < input.end(); it++)
	{
		char c = *it;
		if (std::isalpha(c) && std::isdigit(c))
			std::cout << std::isupper(c);
		else
			std::cout << c;
	}
	std::endl;
}