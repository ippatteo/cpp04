#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default conststructor" << std::endl;
	this->type = "WrongCat";
	return; 
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
	return; 
}

WrongCat::WrongCat(const WrongCat &inst) : WrongAnimal()
{
	std::cout << "WrongCat copy conststructor" << std::endl;
	this->type = inst.getType();
	return; 
}

void WrongCat::makeSound() const
{
	std::cout << "wiem. wiem. **Wrongcat lighs up a glass of wine**" << std::endl;
	return;
}

WrongCat &WrongCat::operator=(const WrongCat &inst)
{ 
	if (this != &inst) 
		this->type = inst.getType();
    return *this;
}