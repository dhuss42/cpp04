#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type) : type(type)
{
}

AMateria::AMateria(const AMateria& src)
{
    // not sure yet
}

AMateria& AMateria::operator=(const AMateria& other)
{
    // not sure yet
}

AMateria::~AMateria()
{
    // not sure yet
}

std::string const & AMateria::getType() const
{
    return (type);
}


// void AMateria::(ICharacter& target)
// {

// }