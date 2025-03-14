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
	delete i;
	delete j;
	delete meta;

	std::cout << "\n\033[34m[----------Animal Array Tests----------]\033[37m" << std::endl;
	Animal* array[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}
	for (int i = 0; i < 4; i++)
		delete array[i];

	std::cout << "\n\033[34m[----------Ideas Test----------]\033[37m" << std::endl;
	Cat kitty;

	kitty.setIdea("sratch people", 3);
	kitty.setIdea("behave like cat", 101);
	kitty.setIdea("Fly to mars", -1);
	std::cout << kitty.getIdea(3) << std::endl;
	std::cout << kitty.getIdea(-1) << std::endl;
	std::cout << kitty.getIdea(101) << std::endl;
	std::cout << kitty.getIdea(0) << std::endl;

	std::cout << "\n\033[34m[----------Cat Copy Constructor Test----------]\033[37m" << std::endl;
	Cat ogCat;

	ogCat.setIdea("do magic trick", 50);
	Cat copyCat(ogCat);
	ogCat.setIdea("play with ball", 49);
	std::cout  << "\n\033[36m<--ogCat-->\033[37m" << std::endl;
	std::cout << ogCat.getIdea(50) << std::endl;
	std::cout << ogCat.getIdea(49) << std::endl;
	std::cout  << "\n\033[35m<--CopyCat-->\033[37m" << std::endl;
	std::cout << copyCat.getIdea(50) << std::endl;
	std::cout << copyCat.getIdea(49) << std::endl;

	std::cout << "\n\033[34m[----------Assignment operator Test----------]\033[37m" << std::endl;
	Cat assignCat;

	ogCat.setIdea("receive bachelor degree", 99);
	assignCat = ogCat;
	std::cout << "\n\033[36m<--ogCat-->\033[37m" << std::endl;
	std::cout << ogCat.getIdea(99) << std::endl;
	std::cout << "\n\033[35m<--AssignCat-->\033[37m" << std::endl;
	std::cout << assignCat.getIdea(99) << std::endl;;
	std::cout << assignCat.getIdea(50) << std::endl;;
	std::cout << assignCat.getIdea(49) << std::endl;;

	std::cout << "\n\033[34m[----------Destructors----------]\033[37m" << std::endl;
	return (0);
}
