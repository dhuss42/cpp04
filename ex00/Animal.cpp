#include "Animal.hpp"

//------canonicals---------//

Animal::Animal()
{
    std::cout << "an Animal object was created" << std::endl;
}

Animal::Animal(const Animal& src) : type(src.type)
{
    std::cout << "an Animal object was created with copy constructor\n" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "an Animal object was deleted\n" << std::endl;
}

//---------methods---------//

std::string Animal::getType(void) const
{
    return (type);
}

void Animal::makeSound(void) const
{
    std::cout << "the animal makes some weird noise" << std::endl;
}
