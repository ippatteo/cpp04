#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* catBrain;
	public:
		virtual ~Cat(); //def dest
		Cat(); //def cost
		Cat(const Cat &inst); //copy const
		Cat &operator=(const Cat &inst); // = op
		void makeSound() const;

};

#endif