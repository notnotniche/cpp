#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("Default"), _points(10) , _energy(10) , _attackDamage(0)
{
    std::cout << "Constructor default Called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_Name << " Was destroyed" << std::endl; 
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _points(10) , _energy(10) , _attackDamage(0)
{
    std::cout << "Constructor string Called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name, int points, int energy , int attackdamage) : _Name(Name), _points(points) , _energy(energy) , _attackDamage(attackdamage)
{
    std::cout << "Big Fat ClapTrap constructor called" << std::endl;
}
ClapTrap::ClapTrap( ClapTrap &other )
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
	return;
}

ClapTrap	&ClapTrap::operator=(ClapTrap &rhs){
	this->_Name = rhs._Name;
	this->_points = rhs._points;
	this->_energy = rhs._energy;
	this->_attackDamage = rhs._attackDamage;
	return(*this);
}

void ClapTrap::Attack(const std::string &target)
{
    if (_energy > 0)
    {
        this->_energy--;
        std::cout << _Name << "attacks " << target << " , causing " << _attackDamage << " points of damage !" << std::endl;
        std::cout << " he now has " << _energy << " points of energy left " << std::endl << std::endl;
    }
    else
        std::cout << "too low on energy the Claptrap " << _Name << " cant attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_points > 0)
    {
        this->_points = this->_points - amount;
        std::cout << _Name << " has taken " << amount << " of damages, and has now " << this->_points << " points of life left" << std::endl << std::endl;
    }
    else
    {
        std::cout << _Name << " is dead !" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_points > 0 && _energy > 0 && amount > 0)
    {
        this->_points = this->_points + amount;
        this->_energy = this->_energy - 1;
        std::cout << _Name << " is repairing itself" << std::endl;
        std::cout << "GROUIIIK GROIUIIIIIK" << std::endl;
        std::cout << _Name << " has now " << _points << " points of life left and " << _energy << " points of energy left" << std::endl;
        std::cout << std::endl;
    }
    else if ( amount <= 0)
    {
        std::cout << "cannot repair a null or negativ amount" << std::endl;
    }
    else
    {
        std::cout << _Name << " is already dead ! " << std::endl;
    }
}