#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
    _type = "Cure";
    std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(const Cure& src) : AMateria(src)
{
}

Cure& Cure::operator=(const Cure& other)
{
    // needs stuff
    return (*this);
}

Cure::~Cure()
{
    // not sure yet
}

//--------public methods---------//

AMateria* Cure::clone() const
{
    return (new Cure( *this ));
}