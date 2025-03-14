#include "Brain.hpp"

//----------canonicals------------//
Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "random idea";
	std::cout << "A Brain was constructed" << std::endl;
}

Brain::Brain(const Brain& src)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
	std::cout << "A Brain was constructed using the copy constructer" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "A Brain was deleted" << std::endl;
}

//-----getters & setters-------//

void	Brain::setIdea(const std::string& idea, int index)
{
	if (index >= 0 && index <= 99)
		_ideas[index] = idea;
	else
		std::cout << "Error: " << index << " not in range 0 - 99" << std::endl;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index <= 99)
		return (_ideas[index]);
	return ("Error: Wrong index");
}
