#include "Zombie.hpp"

int stringToInt(const std::string& str)
{
    int result = 0;
    for (size_t i = 0; i < str.size(); ++i)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            throw std::invalid_argument("Invalid number format.");
        }
        result = result * 10 + (str[i] - '0');
    }
    return result;
}


int main(int argc, char **argv)
{
    if (argc != 3)
    {
        std::cerr << "Usage: " << argv[0] << " <number_of_zombies> <zombie_name>" << std::endl;
        return 1;
    }

    int N;
    try
    {
        N = stringToInt(argv[1]);
        if (N <= 0)
        {
            std::cerr << "Error: Number of zombies must be a positive integer." << std::endl;
            return 1;
        }
    }
    catch (const std::invalid_argument& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    std::string name = argv[2];

    Zombie *zombieHordeInstance = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
    {
        zombieHordeInstance[i].announce();
    }

    delete[] zombieHordeInstance;
    return 0;
}