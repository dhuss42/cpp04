#include "Dog.hpp"

//--------canonicals----------//

Dog::Dog()
{
    type = "Dog";
    std::cout << "A Dog object was created!" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
    std::cout << "A Dog object was created with a copy constructor!" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
        Animal::operator=(other);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "A Dog object was deleted!" << std::endl;
}

//---------methods---------//

void    Dog::makeSound() const
{
    std::cout << type << " barks! wuff wuff" << std::endl;
}
