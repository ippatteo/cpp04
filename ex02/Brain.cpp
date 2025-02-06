#include"Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
	return;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
	return;
}

void Brain::setIdeas(std::string newIdea, int pos)
{
	if (pos >= 0 && pos < 100)
		this->ideas[pos] = newIdea;
	else
		std::cout << "Invalid position" << std::endl;
	return;
}

std::string Brain::getIdeas(int pos) const
{
	if (pos >= 0 && pos < 100)
		return (this->ideas[pos]);
	else
		return ("invalid position");
}
Brain::Brain(const Brain &inst)
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = inst.getIdeas(i);
		i++;
	}
	return;
}

Brain &Brain::operator=(const Brain &inst)
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = inst.getIdeas(i);
		i++;
	}

	return *this;
}
