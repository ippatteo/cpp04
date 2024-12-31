#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default conststructor" << std::endl;
	this->type = "Dog";
	return; 
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	return; 
}

Dog::Dog(const Dog &inst) : Animal()
{
	std::cout << "Dog copy conststructor" << std::endl;
	this->type = inst.getType();
	return; 
}

void Dog::makeSound() const
{
	std::cout << "wof. wof. **sip a glass of red wine**" << std::endl;
	return;
}

Dog &Dog::operator=(const Dog &inst)
{ 
	if (this != &inst) 
		this->type = inst.getType();
    return *this;
}