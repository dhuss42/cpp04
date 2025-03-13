/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:49:47 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 14:49:48 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat();
		WrongCat(const WrongCat& src);
		WrongCat& operator=(const WrongCat& src);
		~WrongCat();
		void makeSound(void) const;
};

#endif