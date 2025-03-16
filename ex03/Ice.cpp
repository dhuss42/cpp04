#include "Ice.hpp"

/*--------------------*/
/* Constructor        */
/*--------------------*/
Ice::Ice() : AMateria("ice")
{
}

/*--------------------*/
/* Copy Constructor   */
/*--------------------*/
Ice::Ice(const Ice& src) : AMateria(src._type)
{
}

/*----------------------------*/
/* Copy assignment Operator   */
/*----------------------------*/
Ice& Ice::operator=(const Ice& other)
{
    (void) other;
    std::cout << "Error: Ice is of type const" << std::endl;
    return (*this);
}

/*----------------------------*/
/* Destructor                 */
/*----------------------------*/
Ice::~Ice()
{
}

//------public methods---------//

/*----------------------------*/
/* overriden clone function   */
/*----------------------------*/
AMateria* Ice::clone() const
{
    return (new Ice( *this ));
}

/*----------------------------*/
/* overriden use function     */
/*----------------------------*/
void Ice::use(ICharacter& target)
{
    std::cout << " * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}