#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// Testing Animal, Dog, and Cat
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "Animal type: " << meta->getType() << std::endl;
	std::cout << "Dog type: " << dog->getType() << std::endl;
	std::cout << "Cat type: " << cat->getType() << std::endl;

	meta->makeSound();
	dog->makeSound();
	cat->makeSound();

	delete meta;
	delete dog;
	delete cat;

	// Testing WrongAnimal and WrongCat
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "WrongAnimal type: " << wrongMeta->getType() << std::endl;
	std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;

	wrongMeta->makeSound();
	wrongCat->makeSound();

	delete wrongMeta;
	delete wrongCat;

	return 0;
}