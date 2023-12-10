#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string name;
    int Hitpoints;
    int Energy;
    int Attack_Damage;
public:
    void Attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    ClapTrap	&operator=( ClapTrap &other );

    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap( ClapTrap &toCopy );
    ~ClapTrap();
};

#endif