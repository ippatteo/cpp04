#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		virtual ~WrongCat(); //def dest
		WrongCat(); //def cost
		WrongCat(const WrongCat &inst); //copy const
		WrongCat &operator=(const WrongCat &inst); // = op
		void makeSound() const;

};

#endif