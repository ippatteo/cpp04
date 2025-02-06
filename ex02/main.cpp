#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Test individual Dog and Cat creation and deletion
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j; // should not create a leak
	delete i;

	// Create an array of Animal objects
	const int numAnimals = 4;
	Animal* animals[numAnimals];

	// Fill half with Dogs and half with Cats
	for (int i = 0; i < numAnimals / 2; ++i)
		animals[i] = new Dog();
	for (int i = numAnimals / 2; i < numAnimals; ++i)
		animals[i] = new Cat();

	// Test deep copy
	Dog originalDog;
	originalDog.setDogIdeas("Chase the ball", 0);
	Dog copiedDog = originalDog;
	copiedDog.setDogIdeas("Sleep", 0);

	std::cout << "Original Dog Idea: " << originalDog.getDogIdeas(0) << std::endl;
	std::cout << "Copied Dog Idea: " << copiedDog.getDogIdeas(0) << std::endl;

	// Delete all animals
	for (int i = 0; i < numAnimals; ++i)
		delete animals[i];

	return 0;
}