#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& src);
        Animal& operator=(const Animal& other);
        ~Animal();
        virtual void    makeSound() const;
        virtual std::string getType() const;
};

#endif