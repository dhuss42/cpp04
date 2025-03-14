#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    private:

    public:
        Cure();
        Cure(const Cure& src);
        Cure& operator=(const Cure& other);
        ~Cure();

        AMateria* clone() const; // returns Cure materia
        // virtual void use(ICharacter& target);     
};

#endif