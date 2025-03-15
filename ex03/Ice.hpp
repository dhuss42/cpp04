#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    private:
        
    public:
        Ice();
        Ice(const Ice& src);
        Ice& operator=(const Ice& other);
        ~Ice();

        AMateria* clone() const; // returns Ice materia
        // virtual void use(ICharacter& target);      
};

#endif