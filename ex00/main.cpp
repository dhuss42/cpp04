/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:50:09 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 14:50:11 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	const WrongAnimal* meta_wrong = new WrongAnimal();
	const WrongAnimal* i_wrong = new WrongCat();

	std::cout << i_wrong->getType() << " " << std::endl;
	i_wrong->makeSound();
	meta_wrong->makeSound();

	delete meta;
	delete j;
	delete i;
	delete meta_wrong;
	delete i_wrong;
	return (0);
}
