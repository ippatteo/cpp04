#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		virtual ~Cat(); //def dest
		Cat(); //def cost
		Cat(const Cat &inst); //copy const
		Cat &operator=(const Cat &inst); // = op
		void makeSound() const;

};

#endif