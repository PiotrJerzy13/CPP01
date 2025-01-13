#include "Zombie.hpp"

int main() 
{
	Zombie* heapZombie = newZombie("Tom");
	heapZombie->announce();
	delete heapZombie;

	randomChump("Luca");

	return 0;
}