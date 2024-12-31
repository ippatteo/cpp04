#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default conststructor" << std::endl;
	this->type = "Cat";
	return; 
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	return; 
}

Cat::Cat(const Cat &inst) : Animal()
{
	std::cout << "Cat copy conststructor" << std::endl;
	this->type = inst.getType();
	return; 
}

void Cat::makeSound() const
{
	std::cout << "meow. weow. **cat lighs up a cigarette and puff a cloud in your face**" << std::endl;
	return;
}

Cat &Cat::operator=(const Cat &inst)
{ 
	if (this != &inst) 
		this->type = inst.getType();
    return *this;
}