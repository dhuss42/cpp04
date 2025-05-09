/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:50:28 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 15:34:38 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//-------canonicals-------//

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "A Cat object was created" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
	std::cout << "a Cat object was created with copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		Animal::operator=(other);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "A Cat object was deleted" << std::endl;
}

//---------methods-----------//

void Cat::makeSound(void) const
{
	std::cout << _type << " miaus!" << std::endl;
}
