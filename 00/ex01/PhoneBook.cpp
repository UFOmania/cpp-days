#include "PhoneBook.hpp"
#include <iostream>

bool	is_valid(std::string str, bool is_phone_number)
{
	if (str.empty())
		return (false);
	
	for(int i = 0;i < (int)str.length(); i++)
	{
		if (is_phone_number == true)
		{
			if (std::isdigit(str[i]) == 0)
				return (false);
		}
		else
		{
			if (std::isalpha(str[i]) == 0)
				return (false);
		}
	}
	return (true);
}

std::string		read_and_validate_input(std::string msg, bool is_phone_num)
{
	std::string	str;

	std::cout << msg << std::endl;
	while (1)
	{
		if (!std::getline(std::cin, str))
			return ("");
		if (is_valid(str, is_phone_num))
			break ;
		std::cout << "try again !!!\n";
	}
	return (str);
}

void	PhoneBook::add_contact()
{
	std::string fname, lname, phone, nickname, secret;

	fname = read_and_validate_input("enter first name :", false);
	if (fname.empty())
		return ;

	lname = read_and_validate_input("enter last name :", false);
	if (lname.empty())
		return ;

	phone = read_and_validate_input("enter phone number :", true);
	if (phone.empty())
		return ;

	nickname = read_and_validate_input("enter nickname :", false);
	if (nickname.empty())
		return ;

	secret = read_and_validate_input("enter the darkest secret :", false);
	if (secret.empty())
		return ;

	_contacts[_index % 8].set_first_name(fname);
	_contacts[_index % 8].set_last_name(lname);
	_contacts[_index % 8].set_phone_number(phone);
	_contacts[_index % 8].set_nickname(nickname);
	_contacts[_index % 8].set_darkest_secret(secret);

	_index = ++_index % 8;
}

PhoneBook::PhoneBook()
{
	_index = 0;
}

void put_cell(std::string str)
{
	int	padding;

	padding = 10 - str.length();
	if (padding <= 0)
	{
		str = str.substr(0, 9) + ".";
		std::cout << str << "|";
	}
	else
		std::cout << std::setw(10) << str << "|";
}

void	PhoneBook::show_all()
{
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "f_name"<< "|";
	std::cout << std::setw(10) << "l_name"<< "|";
	std::cout << std::setw(10) << "nickname"<< "|\n"; 
	for(int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i << "|"; 
		put_cell(_contacts[i].get_first_name());
		put_cell(_contacts[i].get_last_name());
		put_cell(_contacts[i].get_nickname());
		std::cout << std::endl;
	}
}

static int	ft_ctoi(char c)
{
	return (c - 48);
}

void PhoneBook::incpect_contact(std::string index)
{
	std::cout << "- index : " << index << std::endl;
	std::cout << "- first name : " << _contacts[ft_ctoi(index[0])].get_first_name() << std::endl;
	std::cout << "- last name : " << _contacts[ft_ctoi(index[0])].get_last_name() << std::endl;
	std::cout << "- phone number : " << _contacts[ft_ctoi(index[0])].get_phone_number() << std::endl;
	std::cout << "- nickname : " << _contacts[ft_ctoi(index[0])].get_nickname() << std::endl;
	std::cout << "- darkest secret : " << _contacts[ft_ctoi(index[0])].get_darkest_secret() << std::endl;

}

bool	PhoneBook::is_valid_index(std::string index)
{
	return (index.length() == 1 && index[0] >= '0' && index[0] <= '7' && !_contacts[ft_ctoi(index[0])].get_first_name().empty());
}

void	PhoneBook::view_contacts()
{
	if (_contacts[0].get_first_name().empty())
	{
		std::cout << "there no contact, try to ADD some :)\n";
		return ;
	}
	show_all();
	std::string input;
	while (true)
	{
		std::cout << "to inspect a contact's details \nenter a valid index or anything else to go back ??\n";
		if (!std::getline(std::cin, input))
			return;
		if (is_valid_index(input))
			incpect_contact(input);
		else
			return ;
	}
	
	
} 