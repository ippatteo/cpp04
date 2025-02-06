#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("undefined")
{
	std::cout << "WrongAnimal default conststructor" << std::endl;
	return; 
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
	return; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &inst)
{
	std::cout << "WrongAnimal copy conststructor" << std::endl;
	this->type = inst.getType();
	return; 
}

void WrongAnimal::makeSound() const
{
	std::cout << "**unknown shgfjybfh noise**" << std::endl;
	return;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &inst)
{ 
	if (this != &inst) 
		this->type = inst.getType();
    return *this;
}

