#include "Brain.hpp"

//---------canonicals------------//

Brain::Brain()
{
    std::cout << "A Brain object was created!" << std::endl;
}

Brain::Brain(const Brain& src)
{
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "A Brain object was deleted!" << std::endl;
}
