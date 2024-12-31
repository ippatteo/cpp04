#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		virtual ~Dog(); //def dest
		Dog(); //def cost
		Dog(const Dog &inst); //copy const
		Dog &operator=(const Dog &inst); // = op
		void makeSound() const; //non obbligatorio il const, ma utile in questo caso

};

#endif