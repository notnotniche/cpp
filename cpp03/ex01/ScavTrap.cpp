#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default", 100, 50, 20)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name, 100, 50, 20)
{
    std::cout << "ScavTrap string constructor is called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor is called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap(other._Name, other._points, other._energy , other._attackDamage)
{
    std::cout << "Claptrap copy constructor is called" << std::endl;
    *this = other;
    return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap &other)
{
    this->_Name = other._Name;
    this->_points = other._points;
    this->_energy = other._energy;
    this->_attackDamage = other._attackDamage;
    return (*this);
}

void ScavTrap::guardGate(void)
{
    std::cout << "ALEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEERT ScavTrap " << _Name << " is on duty careful " << std::endl;
    std::cout << "BZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ" << std::endl;
}

void ScavTrap::Attack(const std::string &target)
{
    if (_energy > 0)
    {
        this->_energy--;
        std::cout << _Name << " attacks " << target << " scavTrap style , causing " << _attackDamage << " points of damage !" << std::endl;
        std::cout << " he now has " << _energy << " points of energy left " << std::endl << std::endl;
    }
    else
        std::cout << "too low on energy the ScavTrap " << _Name << " cant attack" << std::endl;
}