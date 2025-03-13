/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:50:28 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 14:50:28 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//-------canonicals-------//

Cat::Cat()
{
	type = "Cat";
	std::cout << "A Cat object was created" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
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
	std::cout << type << " miaus!" << std::endl;
}
