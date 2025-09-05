#include <iostream>

#include "PhoneBook.hpp"


int main()
{
	PhoneBook book;
	std::string line;

	while (1)
	{
		if (std::cin.eof())
			return (EXIT_FAILURE);
		std::cout << "what are u looking for ??? [ADD] [SEARCH] [EXIT]\n";
		if (!std::getline(std::cin, line))
			return (EXIT_FAILURE);
		if (line == "ADD")
			book.add_contact();
		else if (line == "SEARCH")
			book.view_contacts();
		else if (line == "EXIT")
			break;
	}
}