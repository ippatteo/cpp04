# cpp04

C++ exercises - Inheritance, Polymorphism, and Deep Copy (42 school)

## Project Structure

- **ex00**: Animal, Dog, Cat
  - Implementation of base and derived classes, method override, polymorphism.
  - Object management via pointers and behavior testing.
- **ex01**: Brain
  - Introduction of the `Brain` class as a member of `Cat` and `Dog`.
  - Dynamic memory management and deep copy.
- **ex02**: Deep Copy
  - Further exploration of deep copy for complex objects.

Each exercise contains:
- Source and header files for the classes (`Animal`, `Cat`, `Dog`, `Brain`, `WrongAnimal`, `WrongCat`)
- `main.cpp` to test functionalities
- `Makefile` for compilation

## Compilation

To compile each exercise:

```sh
cd ex00 && make
cd ex01 && make
cd ex02 && make
```

## Execution

Each executable is in its respective folder. Example:

```sh
./ex00/animal
./ex01/animal
./ex02/animal
```

## Author
Project developed for 42 school.
