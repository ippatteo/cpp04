#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &inst);
	WrongCat &operator=(const WrongCat &inst);
	void makeSound() const; // Not virtual
};

#endif