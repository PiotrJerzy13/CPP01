#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie 
{
private:
    std::string name;
public:
    Zombie(const std::string& name);

    ~Zombie();

    void announce() const;
};


Zombie* newZombie(const std::string& name);

void randomChump(const std::string& name);

#endif

