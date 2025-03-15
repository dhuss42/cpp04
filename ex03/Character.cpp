#include "Character.hpp"

/*--------------------*/
/* Constructor        */
/*--------------------*/
Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = nullptr;
}

/*--------------------*/
/* Copy Constructor   */
/*--------------------*/
Character::Character(const Character& src) : _name(src._name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = src._inventory[i]; // maybe also nullptr

    // maybe function for copying inventory
}

/*----------------------------*/
/* Copy assignment Operator   */
/*----------------------------*/
Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        _name = other._name;
        // clear inv
        // clone inv
    }
    return (*this);
}

Character::~Character()
{

}

//--------getters & setters---------//

std::string const & Character::getName() const
{
    return (_name);
}

//------public methods-------//

void Character::equip(AMateria* m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{
    
}