#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& src);
        WrongAnimal& operator=(const WrongAnimal& other);
        ~WrongAnimal();
        void        makeSound(void) const;
        virtual std::string getType(void) const;
};

#endif