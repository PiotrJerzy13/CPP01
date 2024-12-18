#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " is dead"  << std::endl;
}

void Zombie::announce() const 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string newname)
{
	name = newname;
}
