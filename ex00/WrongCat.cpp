/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:49:52 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 14:49:53 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//------------Canoncials------------//

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "A WrongCat object was created!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
	std::cout << "A WrongCat object was created via Copy Constructor!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		WrongAnimal::operator=(other);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "A WrongCat object was deleted!" << std::endl;
}

//------------Methods------------//

void	WrongCat::makeSound() const
{
	std::cout << _type << " makes the WrongCat Sound" << std::endl;
}
