#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(const AMateria& src)
{
    // not sure yet
}

AMateria& AMateria::operator=(const AMateria& other)
{
    // not sure yet
    return (*this);
}

AMateria::~AMateria()
{
    // not sure yet
}

std::string const & AMateria::getType() const
{
    return (_type);
}


// void AMateria::(ICharacter& target)
// {

// }