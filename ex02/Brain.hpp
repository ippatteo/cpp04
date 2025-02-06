#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(); //defcos
		~Brain(); //des
		Brain(const Brain& onj); //copy cos
		Brain& operator=(const Brain& obj); // = op
		void setIdeas(std::string newIdea, int pos);
		std::string getIdeas(int pos) const;
};

#endif
