#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
private:
    // Private complaint functions
    void debug();
    void info();
    void warning();
    void error();

public:
    // Public interface
    void complain(const std::string& level);
};

#endif
