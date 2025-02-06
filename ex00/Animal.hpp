#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		virtual ~Animal(); //def dest
		Animal(); //def cost
		Animal(const Animal &inst); //copy const
		Animal &operator=(const Animal &inst); // = op
		virtual void makeSound() const;
		std::string getType() const; //deve essere const perché in get type si aspetta un
										//oggetto const che non dve essere  modificato cosi sto dicendo a get tyope "non midificare nulla"
};

#endif