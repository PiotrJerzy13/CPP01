#include "Zombie.hpp"

Zombie::Zombie(const std::string& name) : name(name) {}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " is dead"  << std::endl;
}

void Zombie::announce() const 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie* newZombie(const std::string& name) 
{
    return new Zombie(name);
}

void randomChump(const std::string& name) 
{
    Zombie stackZombie(name);
    stackZombie.announce();
}
