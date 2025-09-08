#include "Zombie.hpp"

int main()
{
	Zombie origin("origin");

	int n = 10;
	Zombie *horde = origin.zombieHorde(n, "npc");
	delete [] horde;
}