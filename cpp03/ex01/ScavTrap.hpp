#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap(void);
        ~ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &other);

        ScavTrap &operator=(ScavTrap &other);

        void guardGate();
        void Attack(const std::string &target);

};


#endif
