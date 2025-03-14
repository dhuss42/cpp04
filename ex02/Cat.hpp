/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:50:23 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 15:50:04 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(const Cat& src);
		Cat& operator=(const Cat& other);
		~Cat();
		virtual void	makeSound() const;
		void			setIdea(const std::string& idea, int index);
		std::string		getIdea(int index) const;
};

#endif