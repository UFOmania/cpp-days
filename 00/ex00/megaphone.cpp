#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for(int i = 1; i < ac; i++)
		{
			std::string	str = av[i];
			for(int j = 0; j < (int)str.length(); j++)
			{
				std::cout << (char)std::toupper(str[j]);
			}
		}
		std::cout << std::endl;
	}
}