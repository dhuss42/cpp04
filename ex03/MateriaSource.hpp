#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

// needs to be able to learn templates of Materias

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _materias[4];
        void    cloneMateria();
        void    deleteMateria();
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& src);
        MateriaSource& operator=(const MateriaSource& other);
        ~MateriaSource();

        void learnMateria(AMateria* mat);
        AMateria* createMateria(std::string const & type);
};

#endif