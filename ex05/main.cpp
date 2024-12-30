#include "Harl.hpp"

void clearScreen() 
{
    std::system("clear");
}

int main(int argc, const char* argv[]) 
{
    if (argc != 2) 
    {
        std::cerr << "\nUsage: ./harl <level: 'DEBUG', 'INFO', 'WARNING', 'ERROR'>\n" << std::endl;
        return 1;
    }

    Harl harl;
	clearScreen();
    harl.complain(argv[1]);

    return 0;
}


