/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:10:44 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 18:12:05 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

int main(void)
{
	{
		std::cout << std::endl;
		std::cout << "------ INITIAL TESTS ------" << std::endl;
		std::cout << std::endl;

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
		delete bob;
		delete me;
		delete src;
	}

	std::cout << std::endl;
	std::cout << "------ ADDITIONAL TESTS -------" << std::endl;
	std::cout << std::endl;

	AMateria *i = new Ice();
	AMateria *c = new Cure();

	std::cout << "i:" << i->getType() << std::endl;
	std::cout << "c:" << c->getType() << std::endl;

	AMateria *clone = i->clone();

	std::cout << "i clone:" << clone->getType() << std::endl;

	delete clone;

	clone = c->clone();

	std::cout << "c clone:" << clone->getType() << std::endl;


	ICharacter *you;
	ICharacter *it;

	you = new Character("you");
	it = new Character("it");

	you->equip(c);
	you->equip(i);
	you->equip(clone);
	you->equip(i);
	you->equip(i);

	you->use(0, *it);
	you->use(1, *it);
	you->use(2, *it);
	you->use(3, *it);
	you->use(4, *it);

	IMateriaSource *fountain = new MateriaSource();

	fountain->learnMateria(c->clone());
	fountain->learnMateria(i->clone());
	fountain->learnMateria(clone->clone());
	fountain->learnMateria(i->clone());
	fountain->learnMateria(i->clone());

	you->unequip(1);
	you->unequip(0);

	std::cout << "------ trying to use after unquiping ------" << std::endl;

	you->use(0, *it);
	you->use(1, *it);

	std::cout << "------ requip and use ------" << std::endl;

	you->equip(fountain->createMateria("ice"));

	std::cout << "useing slot 0" << std::endl;
	you->use(0, *it);
	std::cout << "useing slot 1" << std::endl;
	you->use(1, *it);
	std::cout << "useing slot 2" << std::endl;
	you->use(2, *it);

	std::cout << "requip another" << std::endl;
	you->equip(fountain->createMateria("cure"));
	std::cout << "useing slot 1" << std::endl;
	you->use(1, *it);


	delete you;

	// delete i;
	delete c;
	// delete clone;

	std::cout << "------ testing char duplication ------" << std::endl;

	Character def("def");

	AMateria *lost = fountain->createMateria("ice");

	def.equip(lost);
	def.equip(fountain->createMateria("cure"));
	def.equip(fountain->createMateria("cure"));
	def.equip(fountain->createMateria("ice"));

	def.unequip(0);
	def.use(0, *it);

	Character dup(def);

	std::cout << dup.getName() << std::endl;
	dup.use(0, *it);
	dup.use(1, *it);

	Character dup2;

	dup2 = def;

	std::cout << dup2.getName() << std::endl;
	dup2.use(0, *it);
	dup2.use(1, *it);

	delete fountain;
	delete it;

	delete lost;
	std::cout << std::endl;
	std::cout << "------- CHECK LEAKS -------" << std::endl;
	std::cout << std::endl;
//	system("leaks hell");

	std::cout << std::endl;
	std::cout << "------- THE END -------" << std::endl;
	std::cout << std::endl;
	delete i;
	return(0);
}
