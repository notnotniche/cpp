#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    public :
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(ClapTrap &other);
        ClapTrap(std::string Name, int points, int energy , int attackdamage);

        ClapTrap &operator=(ClapTrap &rhs);
        void Attack(const std::string &target);
        void takeDamage(unsigned int amounnt);
        void beRepaired(unsigned int amount);

    protected :
        std::string _Name;
        int _points;
        int _energy;
        int _attackDamage;

};

#endif