#include "AMateria.hpp"

/*--------------------*/
/* Constructor        */
/*--------------------*/
AMateria::AMateria(std::string const & type) : _type(type)
{
}

/*--------------------*/
/* Copy Constructor   */
/*--------------------*/
AMateria::AMateria(const AMateria& src) : _type(src._type)
{
}

/*----------------------------*/
/* Copy assignment Operator   */
/*----------------------------*/
AMateria& AMateria::operator=(const AMateria& other)
{
    (void) other;
    std::cout << "Error: AMateria is of type const" << std::endl;
    return (*this);
}

/*----------------------------*/
/* Destructor                 */
/*----------------------------*/
AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << " * uses an undefined materia on " << target.getName() << " *" << std::endl;
}
