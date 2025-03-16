#include "Cure.hpp"

/*--------------------*/
/* Constructor        */
/*--------------------*/
Cure::Cure() : AMateria("cure")
{
}

/*--------------------*/
/* Copy Constructor   */
/*--------------------*/
Cure::Cure(const Cure& src) : AMateria(src._type)
{
}

/*----------------------------*/
/* Copy assignment Operator   */
/*----------------------------*/
Cure& Cure::operator=(const Cure& other)
{
    (void) other;
    std::cout << "Error: Cure is of type const" << std::endl;
    return (*this);
}

/*----------------------------*/
/* Destructor                 */
/*----------------------------*/
Cure::~Cure()
{
}

//--------public methods---------//

/*----------------------------*/
/* overriden clone function   */
/*----------------------------*/
AMateria* Cure::clone() const
{
    return (new Cure( *this ));
}

/*----------------------------*/
/* overriden use function     */
/*----------------------------*/
void Cure::use(ICharacter& target)
{
    std::cout << " * heals " << target.getName() << "'s wounds *" << std::endl;
}