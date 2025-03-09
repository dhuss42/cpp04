
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
    const Animal* i = new Cat();

    std::cout << i->getType() << " " << std::endl;
    i->makeSound();

    delete i;
    return (0); 
}
