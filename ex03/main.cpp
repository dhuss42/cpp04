/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 13:22:40 by dhuss             #+#    #+#             */
/*   Updated: 2025/03/19 09:30:23 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	std::cout << "\033[34m[----------Modified Subject Main----------]\033[37m" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* tmp1;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n\033[34m[----------Additional Tests----------]\033[37m" << std::endl;
	AMateria* copyTmp(tmp);
	ICharacter* dude = new Character("dude");
	copyTmp = src->createMateria("fire");
	dude->equip(copyTmp);
	dude->use(0, *bob);
	dude->unequip(0);

	std::cout << "\n\033[34m[----------MateriaSource Tests----------]\033[37m" << std::endl;
	std::cout << "\033[33m-----creating original MateriaSource-----\033[37m" << std::endl;
	std::cout << "\033[32m-> OG learning two Materias\033[37m" << std::endl;
	MateriaSource	original;
	original.learnMateria(new Ice);
	original.learnMateria(new Cure);

	std::cout << "\033[33m-----creating copy of original MateriaSource-----\033[37m" << std::endl;
	std::cout << "\033[32m-> OG learning three Materias\033[37m" << std::endl;
	MateriaSource	copy(original);
	original.learnMateria(new Ice);
	original.learnMateria(new Cure);
	original.learnMateria(new Cure);
	std::cout << "\033[32m-> Copy learning one Materia\033[37m" << std::endl;
	copy.learnMateria(new Cure);

	std::cout << "\033[33m-----assigning og to assign MateriaSource-----\033[37m" << std::endl;
	std::cout << "\033[32m-> Assign learning one Materias\033[37m" << std::endl;
	MateriaSource	assign;
	assign = original;
	assign.learnMateria(new Cure);

	std::cout << "\n\033[34m[----------Use Tests----------]\033[37m" << std::endl;
	std::cout << "\033[32m-> use: invalid indexes\033[37m" << std::endl;
	dude->use(-1, *bob);
	dude->use(4, *bob);
	std::cout << "\033[32m-> use: not equiped\033[37m" << std::endl;
	dude->use(3, *bob);

	std::cout << "\n\033[34m[----------AMateria Tests----------]\033[37m" << std::endl;
	std::cout << "\033[33m-----Testing canonical Form of Cure/Ice-----\033[37m" << std::endl;
	std::cout << "\033[32m-> OG Cure getting type\033[37m" << std::endl;
	Cure	originalCure;
	std::cout << originalCure.getType() << std::endl;
	std::cout << "\033[32m-> Copy Cure getting type\033[37m" << std::endl;
	Cure	copyCure(originalCure);
	std::cout << copyCure.getType() << std::endl;
	std::cout << "\033[32m-> Attempting to assign Cure\033[37m" << std::endl;
	Cure	assignCure;
	assignCure = originalCure;

	std::cout << "\n\033[34m[----------Equip/Unequip Tests----------]\033[37m" << std::endl;
	AMateria* tmp2;
	std::cout << "\033[32m-> Equipping two materias\033[37m" << std::endl;
	tmp2 = original.createMateria("ice");
	dude->equip(tmp2);
	tmp2 = original.createMateria("cure");
	dude->equip(tmp2);
	std::cout << "\033[32m-> Unequip invalid indexes\033[37m" << std::endl;
	dude->unequip(5);
	dude->unequip(-1);
	std::cout << "\033[32m-> Unequip slot empty\033[37m" << std::endl;
	dude->unequip(3);
	std::cout << "\033[32m-> Unequip functional\033[37m" << std::endl;
	dude->unequip(1);
	std::cout << "\033[32m-> Use slot empty\033[37m" << std::endl;
	dude->use(1, *bob);
	std::cout << "\033[32m-> Use functional\033[37m" << std::endl;
	dude->use(0, *bob);
	std::cout << "\033[32m-> Equip more tests\033[37m" << std::endl;
	dude->equip(tmp2);
	dude->use(1, *bob);

	delete bob;
	delete dude;
	delete me;
	delete src;
	delete tmp;

	return 0;
}


/* int main()
{
	std::cout << "\033[34m[----------Subject Main + added unequip----------]\033[37m" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	tmp = me->getAMateria(0);
	me->unequip(0);
	delete tmp;

	delete bob;
	delete me;
	delete src;
	return 0;
} */
