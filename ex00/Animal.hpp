/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:50:32 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 15:13:40 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

/*---------------------------------------------------------------------------*/
/* virtual keyword makes it possible to override the method in derived class */
/* Deleting a derived class object when base class has non virtual destructor*/
/* 		results in undefined behaviour										 */
/*---------------------------------------------------------------------------*/

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& src);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif