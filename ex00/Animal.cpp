#include "Animal.hpp"

Animal::Animal() : type("undefined")
{
	std::cout << "Animal default conststructor" << std::endl;
	return; 
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
	return; 
}

Animal::Animal(const Animal &inst)
{
	std::cout << "Animal copy conststructor" << std::endl;
	this->type = inst.getType();
	return; 
}

void Animal::makeSound() const
{
	std::cout << "**unknown feral noise**" << std::endl;
	return;
}

std::string Animal::getType() const
{
	return (this->type);
}

Animal &Animal::operator=(const Animal &inst)
{ 
	if (this != &inst) 
		this->type = inst.getType();
    return *this;
}

