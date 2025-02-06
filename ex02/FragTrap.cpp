#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "Default Frag Trap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	std::cout << "Frag Trap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Frag Trap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &inst) : ClapTrap()
{
    std::cout << "Frag Trap constructor called" << std::endl;
    this->_Name = inst._Name;
    this->_hitPoints = inst._hitPoints;
    this->_energyPoints = inst._energyPoints;
    this->_attackDamage = inst._attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& inst)
{
    std::cout << "Frag Trap copy assignement operator called" << std::endl;
        if (this != &inst)
        {
            this->_Name = inst._Name;
            this->_hitPoints = inst._hitPoints;
            this->_energyPoints = inst._energyPoints;
            this->_attackDamage = inst._attackDamage;
        }
        return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::string	answer;
	std::cout << this->_Name <<" wants to give you an high five do you accept it?" << std::endl;
	std::cout << "write 'yes' if you want to give an high five" << std::endl;
	std::cin >> answer;
	if (answer == "yes" || answer == "Yes" || answer == "YES" || answer == "Fuck yhea" || answer == "YHEEEEEEA")
		std::cout << "You gave " << this->_Name << " an high five" << std::endl;
	else
		std::cout << "You didn't gave " << this->_Name << " an high five you heartless monster" <<std::endl;
}