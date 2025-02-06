#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Default Scav Trap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
	this->_gateKeeperMode = false;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str) 
{
	std::cout << "Scav Trap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
	this->_gateKeeperMode = false;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Trap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &inst) : ClapTrap()
{
    std::cout << "Scav Trap constructor called" << std::endl;
    this->_Name = inst._Name;
    this->_hitPoints = inst._hitPoints;
    this->_energyPoints = inst._energyPoints;
    this->_attackDamage = inst._attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& inst)
{
    std::cout << "Scav Trap copy assignement operator called" << std::endl;
        if (this != &inst) 
        {
            this->_Name = inst._Name;
            this->_hitPoints = inst._hitPoints;
            this->_energyPoints = inst._energyPoints;
            this->_attackDamage = inst._attackDamage;
        }
        return *this;
}

void ScavTrap::guardGate()
{
	this->_gateKeeperMode = true;
	std::cout << "gatekeeper mode on" << std::endl;
}