/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:50:28 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 16:00:51 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//-------canonicals-------//

Cat::Cat() : Animal(), _brain(new Brain)
{
	_type = "Cat";
	std::cout << "A Cat object was created" << std::endl;
}

/*------------------------------------------------------------------------*/
/* Allocating new Brain object via Brain copy constructor for deep copy   */
/* -> otherwise when deleting og Brain would delete copy too 			  */
/* -> done by dereferencing the variable in the src						  */
/*------------------------------------------------------------------------*/
Cat::Cat(const Cat& src) : Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "a Cat object was created with copy constructor" << std::endl;
}

/*--------------------------------------------*/
/* Delete existing Brain to avoid leaks		  */
/* make deep copy of Brain					  */
/*--------------------------------------------*/
Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
		std::cout << "Cat copy assignment operator called" << std::endl;
	}
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "A Cat object was deleted" << std::endl;
}

//---------methods-----------//

void Cat::makeSound(void) const
{
	std::cout << _type << " miaus!" << std::endl;
}

//-----getters & setters-------//

void	Cat::setIdea(const std::string& idea, int index)
{
	_brain->setIdea(idea, index);
}

std::string Cat::getIdea(int index) const
{
	return (_brain->getIdea(index));
}