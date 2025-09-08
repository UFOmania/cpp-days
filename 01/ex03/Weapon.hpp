#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
	private:
		std::string	type;

	public:
		Weapon();
		Weapon(std::string	_type);
		void				setType(std::string _type);
		const std::string&	getType(void) const;
};

#endif