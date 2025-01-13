#include "Harl.hpp"

std::string Harl::to_upper(const std::string &str)
{
	std::string upper_str = str;
	for (size_t i = 0; i < upper_str.length(); i++) {
		if (upper_str[i] >= 'a' && upper_str[i] <= 'z')
		{
			upper_str[i] = upper_str[i] - ('a' - 'A');
		}
	}
	return upper_str;
}
void Harl::debug() 
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void Harl::info() 
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!\n" << std::endl;
}

void Harl::warning() 
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free.\n" << std::endl;
}

void Harl::error() 
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(const std::string& level)
{
	std::string upper_level = to_upper(level);
	void (Harl::*functions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	const std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; i++) 
	{
		if (levels[i] == upper_level) 
		{
			(this->*functions[i])();
			return;
		}
	}

	std::cout << "[UNKNOWN] Unknown complaint level!" << std::endl;
}
