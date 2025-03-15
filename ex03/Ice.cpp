#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
    _type = "ice";
    std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(const Ice& src) : AMateria(src)
{
}

Ice& Ice::operator=(const Ice& other)
{
    // needs stuff
    return (*this);
}

Ice::~Ice()
{
    // not sure yet
}

//------public methods---------//

AMateria* Ice::clone() const
{
    return (new Ice( *this ));
}
