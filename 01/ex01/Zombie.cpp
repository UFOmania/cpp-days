#include "Zombie.hpp"

Zombie::Zombie(std::string _name)
{
	name = _name;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << " has beed destroyed\n";
}

void	Zombie::announce(void)
{
	std::cout << name << " : BraiiiiiiinnnzzzZ...\n";
}

Zombie* Zombie::zombieHorde( int N, std::string _name )
{
	Zombie *horde = new Zombie[N];
	for(int i = 0; i < N; i++)
		horde[i].name = _name;
	return (horde);
}
