#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    std::string to_upper(const std::string &str);

public:
    void complain(std::string level);
};

#endif


