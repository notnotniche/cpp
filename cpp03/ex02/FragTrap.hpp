#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap(void);
        ~FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap &other);

        FragTrap &operator=(FragTrap &other);


        void HighFivesGuys(void);
};

#endif