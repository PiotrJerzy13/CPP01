
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie 
{
private:
    std::string name;

public:
    Zombie() : name("Unnamed Zombie") {}
    Zombie(const std::string& name) : name(name) {}
    ~Zombie();

    void announce() const;
    void setName(std::string newname);
};


Zombie*	zombieHorde( int N, std::string name );

#endif

