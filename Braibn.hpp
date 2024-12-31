#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		std::string ideas[100];
		Brain();
		~Brain();
		Brain(const Brain& onj);
		Brain& operator=(const Brain& obj);
		void setIdea(std::string newIdea, int pos);
		void printBrain();
};

#endif
