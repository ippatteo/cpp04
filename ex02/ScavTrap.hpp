#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP


# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
	bool _gateKeeperMode;
    public:
		
		~ScavTrap();
        ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap &inst);
        ScavTrap& operator=(const ScavTrap &inst);
		void guardGate();
};

#endif