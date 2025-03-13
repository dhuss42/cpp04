/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:50:01 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 14:50:02 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//-------canonicals---------//

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "A WrongAnimal object was created!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) : type(src.type)
{
	std::cout << "A WrongAnimal object was created using a copy constructor!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A WrongAnimal object was deleted!" << std::endl;
}

//---------methods----------//

void	WrongAnimal::makeSound(void) const
{
	std::cout << type << " makes the WrongAnimal Noise" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}