#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	name = _name;
	weapon = NULL;
}

HumanB::HumanB(std::string _name, Weapon &_weapon)
{
	name = _name;
	weapon = &_weapon;
}

void	HumanB::setWeapon(Weapon& _weapon)
{
	weapon = &_weapon;
}

void	HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType();
	else
		std::cout << name << " has no weapon";
	std::cout << std::endl;
}