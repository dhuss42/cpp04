/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 13:18:47 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/17 13:18:47 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure(const Cure& src);
		Cure& operator=(const Cure& other);
		~Cure();

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif