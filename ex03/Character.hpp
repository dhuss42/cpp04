#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria* _inventory[4];
        // inventory of slots 4 Materias
            // empty at construction
    public:
        Character();
        Character(std::string name);
        Character(const Character& src);
        // -> copies must be deep
        // -> Materias of a char must be deleted before the new ones are added to inv
        const Character& operator=(const Character& other);
        ~Character();
        // -> Materias must be deleted when a Character is destroyed

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, Icharacter& target);
        // -> use the Materia at slot idx
        // -> pass target to AMateria::use function
};

#endif