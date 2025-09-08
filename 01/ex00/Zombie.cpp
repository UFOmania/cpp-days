#include "Zombie.hpp"

Zombie::Zombie(std::string _name)
{
	name = _name;
}

Zombie::~Zombie()
{
	std::cout << name << " has beed destroyed\n";
}

void	Zombie::announce(void)
{
	std::cout << name << " : BraiiiiiiinnnzzzZ...\n";
}

Zombie	*Zombie::newZombie(std::string _name)
{
	return new Zombie(_name);
}
void Zombie::randomChump( std::string _name )
{
	Zombie z(_name);
	z.announce();
}
