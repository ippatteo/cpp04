#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP


# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:

    public:
		
		~FragTrap();
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap &inst);
        FragTrap& operator=(const FragTrap &inst);
		void highFivesGuys(void);
};

#endif