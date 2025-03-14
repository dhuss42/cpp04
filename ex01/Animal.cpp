/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:50:37 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 15:13:40 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//------canonicals---------//

Animal::Animal() : _type("Animal")
{
	std::cout << "an Animal object was created" << std::endl;
}

Animal::Animal(const Animal& src) : _type(src._type)
{
	std::cout << "an Animal object was created with copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << "Animal copy assignment operator called" << std::endl;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "an Animal object was deleted" << std::endl;
}

//---------methods---------//

std::string Animal::getType(void) const
{
	return (_type);
}

void Animal::makeSound(void) const
{
	std::cout << "the animal makes some weird noise" << std::endl;
}
