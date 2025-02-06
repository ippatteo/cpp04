#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string str) : _Name(str), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &inst)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_Name = inst._Name;
    this->_hitPoints = inst._hitPoints;
    this->_energyPoints = inst._energyPoints;
    this->_attackDamage = inst._attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& inst)
{
    std::cout << "Copy assignement operator called" << std::endl;
        if (this != &inst) 
        {
            this->_Name = inst._Name;
            this->_hitPoints = inst._hitPoints;
            this->_energyPoints = inst._energyPoints;
            this->_attackDamage = inst._attackDamage;
        }
        return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout<<"No energy/hit points left " <<this->_Name<< " can't attack" << std::endl;

	

}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints-= amount;
		if (this->_hitPoints < 0)
		{
			std::cout<<this->_Name<< " is dead" << std::endl;
			this->_hitPoints = 0;
		}
		else
			std::cout << this->_Name << " got hit, " << this->_hitPoints << "hit points left" << std::endl;
	}
	else
		std::cout << this->_Name << " is already dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << this->_Name << " restored " << amount << " hit points, now it has " << this->_hitPoints << std::endl;
	}
	else
		std::cout << this->_Name << "has no energy/hit points left, " << std::endl;
}

