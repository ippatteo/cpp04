#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class ClapTrap
{
    protected:
	    std::string _Name;
		int _hitPoints;
        int _energyPoints;
        int _attackDamage;
    public:
		~ClapTrap();
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &inst);
        ClapTrap& operator=(const ClapTrap &inst);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif