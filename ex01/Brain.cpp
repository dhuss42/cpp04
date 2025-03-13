#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A Brain was constructed" << std::endl;
}

// not finished
Brain::Brain(const Brain& src)
{
	std::cout << "A Brain was constructed using the copy constructer" << std::endl;
}

Brain::~Brain()
{
	std::cout << "A Brain was deleted" << std::endl;
}