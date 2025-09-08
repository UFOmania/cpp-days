#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB(std::string _name);
		HumanB(std::string _name, Weapon &_weapon);
		void	attack();
		void	setWeapon(Weapon &_weapon);
};

#endif