/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 13:22:07 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/17 13:22:21 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

/*------------------------------------------------------*/
/* needs to be able to learn templates of Materias		*/
/* creates them when needed								*/
/*------------------------------------------------------*/
class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _materias[4];
		void	_copyMateria(const MateriaSource& src);
		void	_clearMateria();
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& src);
		MateriaSource& operator=(const MateriaSource& other);
		~MateriaSource();

		void		learnMateria(AMateria* mat);
		AMateria*	createMateria(std::string const & type);
};

#endif