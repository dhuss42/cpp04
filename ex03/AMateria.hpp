#ifndef AMATERIA_HPP
# define AMERTIA_HPP

#include <iostream>

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& src);
        AMateria& operator=(const AMateria& other);
        ~AMateria();
        std::string const & getType() const; //Returns the materia type
        
        virtual AMateria* clone() const = 0;
        // virtual void use(ICharacter& target);
};

#endif