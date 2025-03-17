/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 13:19:05 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/17 13:19:19 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria& src);
		AMateria& operator=(const AMateria& other);
		~AMateria();
		std::string const &	getType() const; //Returns the materia type

		virtual AMateria*	clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif