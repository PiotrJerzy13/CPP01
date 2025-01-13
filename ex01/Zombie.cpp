#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " is dead"  << std::endl;
}

void Zombie::announce() const 
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(const std::string& newname)
{
	name = newname;
}
