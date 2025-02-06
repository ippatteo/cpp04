#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default conststructor" << std::endl;
	this->catBrain = new Brain();
	this->type = "Cat";
	return;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	delete this->catBrain;
	return;
}

Cat::Cat(const Cat &inst) : Animal()
{
	std::cout << "Cat copy conststructor" << std::endl;
	this->type = inst.getType();
	this->catBrain = new Brain(*inst.catBrain);
	return;
}

Cat &Cat::operator=(const Cat &inst)
{
	if (this != &inst)
	{
		this->type = inst.getType();
		delete this->catBrain; // Dealloca la memoria esistente
		this->catBrain = new Brain(*inst.catBrain); // Alloca nuova memoria e copia il contenuto
	}
	return *this;
}

void Cat::setCatIdeas(std::string newIdea, int pos)
{
	this->catBrain->setIdeas(newIdea, pos);
	return;
}

std::string Cat::getCatIdeas(int pos) const
{
	return (this->catBrain->getIdeas(pos));
}

void Cat::makeSound() const
{
	std::cout << "meow. weow. **cat lighs up a cigarette and puff a cloud in your face**" << std::endl;
	return;
}
