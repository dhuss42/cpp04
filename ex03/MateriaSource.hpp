#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        
    public:
        MateriaSource();
        ~MateriaSource();

        void learnMateria(AMateria*);
        // -> copies Materia passed stores it in memory so it can be cloned later
        // -> Like the Character, the MateriaSource can know at most 4 Materias. They are not necessarily unique.
        AMateria* createMateria(std::string const & type);
        // -> returns a new Materia
        // -> a copy of the Materia learned by MateriaSource
        //      -> type equals the one passed as parameter
        // -> returns 0 if type is unknown
};

#endif