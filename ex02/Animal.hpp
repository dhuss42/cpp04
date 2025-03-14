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
/* Animal turns into an abstract class because it contains one pure virtual  */
/* 		function															 */
/* -> not possible to make an object from abstract class 					 */
/* -> if derived classes don't override all pure virtual functions they 	 */
/* 			become an abstract class themselves								 */
/*---------------------------------------------------------------------------*/
class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal& src);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		virtual void	makeSound() const = 0;
		std::string		getType() const;
};

#endif