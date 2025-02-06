#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default conststructor" << std::endl;
	this->dogBrain = new Brain();
	this->type = "Dog";
	return;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	delete this->dogBrain;
	return;
}

Dog::Dog(const Dog &inst) : Animal()
{
	std::cout << "Dog copy conststructor" << std::endl;
	this->type = inst.getType();
	this->dogBrain = new Brain(*inst.dogBrain);
	return;
}

Dog &Dog::operator=(const Dog &inst)
{
	if (this != &inst)
	{
		this->type = inst.getType();
		delete this->dogBrain; // Dealloca la memoria esistente
		this->dogBrain = new Brain(*inst.dogBrain); // Alloca nuova memoria e copia il contenuto
	}
	return *this;
}

void Dog::setDogIdeas(std::string newIdea, int pos)
{
	this->dogBrain->setIdeas(newIdea, pos);
	return;
}

std::string Dog::getDogIdeas(int pos) const
{
	return (this->dogBrain->getIdeas(pos));
}

void Dog::makeSound() const
{
	std::cout << "wof. wof. **sip a glass of red wine**" << std::endl;
	return;
}