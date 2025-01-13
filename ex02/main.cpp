#include <iostream>
#include <string>

void printInfo(const std::string& value, const std::string* stringPTR, const std::string& stringREF) 
{
	std::cout << "The memory address of the string variable = " << &value << '\n';
	std::cout << "The memory address held by stringPTR = " << stringPTR << '\n';
	std::cout << "The memory address held by stringREF = " << &stringREF << '\n';
	std::cout << "The value of the string variable = " << value << '\n';
	std::cout << "The value pointed to by stringPTR = " << *stringPTR << '\n';
	std::cout << "The value pointed to by stringREF = " << stringREF << '\n';
}

int main() 
{
	std::string value = "HI THIS IS BRAIN";
	const std::string* stringPTR = &value;
	const std::string& stringREF = value;

	printInfo(value, stringPTR, stringREF);

	return 0;
}
