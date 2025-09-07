#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	private:
		int		_index;
		Contact	_contacts[8];
		void	show_all();
		
	public:
		PhoneBook();
		void	add_contact();
		void	view_contacts();
		void	incpect_contact(std::string index);
		bool	is_valid_index(std::string index);
		
};

#endif

