#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

// override keyword is used in a derived class to state that the method of the base class is overwritten

class Dog : public Animal
{
    private:

    public:
        Dog();
        Dog(const Dog& src);
        Dog& operator=(const Dog& other);
        ~Dog();
        void    makeSound() const override;
};

#endif