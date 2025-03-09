#include "WrongCat.hpp"

//------------Canoncials------------//

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "A WrongCat object was created!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
    std::cout << "A WrongCat object was created via Copy Constructor!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
        WrongAnimal::operator=(other);
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "A WrongCat object was deleted!" << std::endl;
}

//------------Methods------------//

void    WrongCat::makeSound() const
{
    std::cout << type << " makes the WrongCat Sound" << std::endl;
}
