#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &inst);
	WrongAnimal& operator=(const WrongAnimal &inst);
	void makeSound() const; // Not virtual
	std::string getType() const;
};

#endif