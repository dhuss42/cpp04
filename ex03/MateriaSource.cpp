/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 13:22:14 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/18 14:31:06 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*----------------------*/
/* Constructor			*/
/*----------------------*/
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
}

/*----------------------*/
/* Copy Constructor		*/
/*----------------------*/
MateriaSource::MateriaSource(const MateriaSource& src)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
	_copyMateria(src);
}

/*------------------------------*/
/* Copy assignment Operator		*/
/*------------------------------*/
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		_clearMateria();
		_copyMateria(other);
	}
	return (*this);
}

/*------------------------------*/
/* Destructor					*/
/*------------------------------*/
MateriaSource::~MateriaSource()
{
	_clearMateria();
}

//-----------private methods-------------//

/*------------------------------------------------------*/
/* Function for deep copies for Copy Constructor		*/
/*------------------------------------------------------*/
void MateriaSource::_copyMateria(const MateriaSource& src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._materias[i])
			_materias[i] = src._materias[i]->clone();
		else
			_materias[i] = nullptr;
	}
}

/*------------------------------------------------------*/
/* Function for freeing _materias[] array				*/
/*------------------------------------------------------*/
void MateriaSource::_clearMateria()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
		{
			delete _materias[i];
			_materias[i] = nullptr;
		}
	}
}

//-----------public methods-------------//

/*------------------------------------------------------*/
/* stores Materia in _materias[i] if valid				*/
/*------------------------------------------------------*/
void MateriaSource::learnMateria(AMateria* mat)
{
	if (!mat)
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
	delete mat;
}

/*------------------------------------------------------*/
/* returns learnt  Materia in _materias[i] if valid		*/
/*------------------------------------------------------*/
AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type != "ice" && type != "cure")
	{
		std::cout << type << " is an invalid type" << std::endl;
		return (0);
	}
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] && type == _materias[i]->getType())
		{
			std::cout << type << " created" << std::endl;
			return (_materias[i]->clone());
		}
	}
	std::cout << type << " not learnt" << std::endl;
	return (0);
}
