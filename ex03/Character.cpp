/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 13:18:59 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/17 15:15:15 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*----------------------*/
/* Constructor			*/
/*----------------------*/
Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

/*----------------------*/
/* Copy Constructor		*/
/*----------------------*/
Character::Character(const Character& src) : _name(src._name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
	_copyInv(src);
}

/*------------------------------*/
/* Copy assignment Operator		*/
/*------------------------------*/
Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		_name = other._name;
		_clearInv();
		_copyInv(other);
	}
	return (*this);
}

/*------------------------------*/
/* Destructor					*/
/*------------------------------*/
Character::~Character()
{
	_clearInv();
}

//--------getters & setters---------//

std::string const & Character::getName() const
{
	return (_name);
}


//--------private methods---------//

/*------------------------------------------------------*/
/* Function for deep copies for Copy Constructor		*/
/*------------------------------------------------------*/
void	Character::_copyInv(const Character& src)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i])
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = nullptr;
	}
}

/*------------------------------------------------------*/
/* Function for freeing _materias[] array				*/
/*------------------------------------------------------*/
void	Character::_clearInv()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = nullptr;
		}
	}
}


//------public methods-------//

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Materia does not exist" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << _name << " equiped " << m->getType() << " in slot: " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 && idx > 3)
	{
		std::cout << "Index is not within valid range" << std::endl;
		return ;
	}
	if (!_inventory[idx])
	{
		std::cout << "No Materias equiped in inventory slot: " << idx << std::endl;
		return ;
	}
	std::cout << _name << " unequiped " << _inventory[idx]->getType() << std::endl;
	_inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Index is not within valid range" << std::endl;
		return ;
	}
	if (!_inventory[idx])
	{
		std::cout << "No Materias equiped in inventory slot: " << idx << std::endl;
		return ;
	}
	std::cout << _name;
	_inventory[idx]->use(target);
}
