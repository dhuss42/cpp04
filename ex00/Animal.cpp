/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:50:37 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 15:49:13 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//------canonicals---------//

Animal::Animal() : type("Animal")
{
	std::cout << "an Animal object was created" << std::endl;
}

Animal::Animal(const Animal& src) : type(src.type)
{
	std::cout << "an Animal object was created with copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "an Animal object was deleted" << std::endl;
}

//---------methods---------//

std::string Animal::getType(void) const
{
	return (type);
}

void Animal::makeSound(void) const
{
	std::cout << "the animal makes some weird noise" << std::endl;
}
