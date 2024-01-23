#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Default", 100 , 100 , 30)
{
    std::cout << "Fragrapt default constructor is called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Desctructor of FragTrap is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100 , 100 , 30)
{
    std::cout << "Fragrapt string constructor is called" << std::endl;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other._Name, other._points, other._energy, other._attackDamage)
{
    std::cout << "FragTrap copy constrcutor was called" << std::endl;
    *this = other;
    return;
}

FragTrap &FragTrap::operator=(FragTrap &other)
{
    this->_Name = other._Name;
    this->_points = other._points;
    this->_energy = other._energy;
    this->_attackDamage = other._attackDamage;
    return (*this);
}

void FragTrap::HighFivesGuys(void)
{
    if (this->_energy > 10)
    {
        this->_energy = this->_energy - 10;
        std::cout << "WAR ALMOST OVER HIGH FIVE BRO" << std::endl;
        std::cout << _Name << " has now " << _energy << " energy left" << std::endl;
        std::cout << std::endl;
    }
    else
    {
        std::cout << _Name << " doesnt have enough energy" << std::endl;
    }
}