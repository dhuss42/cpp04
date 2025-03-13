/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:50:09 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/13 15:55:00 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\033[34m[----------Animal Tests----------]\033[37m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "It's a " << j->getType() << std::endl;
	std::cout << "It's a " << i->getType() << std::endl;
	std::cout << "It's an " << meta->getType() << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	// std::cout << "\n\033[34m[----------Animal copy constructor----------]\033[37m" << std::endl;
	// Animal copy(*meta);
	// std::cout << "It's an " << copy.getType() << std::endl;
	// copy.makeSound();

	// std::cout << "\n\033[34m[----------Animal assignment operator----------]\033[37m" << std::endl;
	// Animal assign;
	// assign = *meta;
	// std::cout << "It's an " << assign.getType() << std::endl;
	// assign.makeSound();

	// std::cout << "\n\033[34m[----------Wrong Animal Tests----------]\033[37m" << std::endl;
	// const WrongAnimal* meta_wrong = new WrongAnimal();
	// const WrongAnimal* i_wrong = new WrongCat();

	// std::cout << "It's a " << i_wrong->getType() << " " << std::endl;
	// i_wrong->makeSound();
	// meta_wrong->makeSound();

	// std::cout << "\n\033[34m[----------Destructors----------]\033[37m" << std::endl;
	delete j;
	delete i;
	delete meta;
	// delete meta_wrong;
	// delete i_wrong;
	return (0);
}
