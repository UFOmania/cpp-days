#include "Zombie.hpp"

int main()
{
	Zombie brahim("brahim");
	Zombie *hmad = brahim.newZombie("hmad");
	hmad->announce();
	brahim.randomChump("khokha");
	delete hmad;
}