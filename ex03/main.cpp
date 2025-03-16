
// #include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() 
{
    std::cout << "\033[34m[----------Test Subject----------]\033[37m" << std::endl;
    IMateriaSource* src = new MateriaSource(); 
    src->learnMateria(new Ice()); 
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob"); 
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me; 
    delete src;

    std::cout << "\n\033[34m[----------Test Subject----------]\033[37m" << std::endl;

return 0; }