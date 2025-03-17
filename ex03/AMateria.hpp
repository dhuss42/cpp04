/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 13:19:05 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/17 13:26:07 by dhuss            ###   ########.fr       */
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
		virtual ~AMateria();
		std::string const &	getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif