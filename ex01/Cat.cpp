#include "Cat.hpp"

//-------canonicals-------//

Cat::Cat()
{
    type = "Cat";
    std::cout << "A Cat object was created" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
        Animal::operator=(other);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "A Cat object was deleted" << std::endl;
    delete brain;
}

//---------methods-----------//

void Cat::makeSound(void) const
{
    std::cout << type << " miaus!" << std::endl;
}
