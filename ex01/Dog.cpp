/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:50:19 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 15:34:48 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//--------canonicals----------//

Dog::Dog() : Animal(), _brain(new Brain)
{
	_type = "Dog";
	std::cout << "A Dog object was created!" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "A Dog object was created with a copy constructor!" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		if (_brain)
			delete _brain;
		_brain = new Brain(*other._brain);
		std::cout << "Dog copy assignment operator called" << std::endl;
	}
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "A Dog object was deleted" << std::endl;
}

//---------methods---------//

void	Dog::makeSound() const
{
	std::cout << _type << " barks! wuff wuff" << std::endl;
}

//---------getters & setters---------//

void	Dog::setIdea(const std::string& idea, int index)
{
	_brain->setIdea(idea, index);
}

std::string Dog::getIdea(int index) const
{
	return (_brain->getIdea(index));
}
