#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    private:
        
    public:
        Ice();
        Ice(std::string const& type);
        Ice(const Ice& src);
        Ice& operator=(const Ice& other);
        ~Ice();

        AMateria* clone(); // returns Ice materia
        // virtual void use(ICharacter& target);      
};

Ice::Ice(/* args */)
{
}

Ice::~Ice()
{
}


#endif