#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	int		i =0;

	zombie = zombieHorde(5, "Tom");
	while (i < 5)
	{
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
	return (0);
}