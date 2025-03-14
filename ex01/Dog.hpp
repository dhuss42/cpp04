/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:50:14 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 15:19:50 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;
	public:
		Dog();
		Dog(const Dog& src);
		Dog& operator=(const Dog& other);
		~Dog();
		virtual void	makeSound() const;
		void			setIdea(const std::string& idea, int index);
		std::string		getIdea(int index) const;
};

#endif