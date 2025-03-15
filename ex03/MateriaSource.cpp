#include "MateriaSource.hpp"

/*--------------------*/
/* Constructor        */
/*--------------------*/
MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materias[i] = nullptr;
}

/*--------------------*/
/* Copy Constructor   */
/*--------------------*/
MateriaSource::MateriaSource(const MateriaSource& src)
{
    // for (int i = 0; i < 4; i++)
        // _materias[i] = ;//
    // not sure yet
}

/*----------------------------*/
/* Copy assignment Operator   */
/*----------------------------*/
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    // not sure
    return (*this);
}

MateriaSource::~MateriaSource()
{
    // not sure
}

//-----------private methods-------------//

void MateriaSource::cloneMateria()
{
    // for copy constructor and assignment
    // -> deep copies
}

//-----------public methods-------------//

void MateriaSource::learnMateria(AMateria* mat)
{
    if ( !mat)
    {
        std::cout << "invalid materia" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (!_materias[i])
        {
            _materias[i] = mat;
            std::cout << "learned new materia " << mat->getType() << std::endl;
            return ;
        }
    }
    std::cout << "No more space to learn new materia" << std::endl;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type != "ice" && type != "cure")
    {
        std::cout << type << " is an invalid type" << std::endl;
        return (0);
    }
    for (int i = 0; _materias[i]; i++)
    {
        if (type == _materias[i]->getType())
        {
            std::cout << type << " created" << std::endl;
            return (_materias[i]->clone());
        }
    }
    std::cout << type << " not learned" << std::endl;
    return (0);
}
