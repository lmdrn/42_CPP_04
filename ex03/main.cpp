/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:10:44 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/24 15:27:02 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	if (tmp) {
	std::cout << "Created ice Materia" << std::endl;
	me->equip(tmp);
	} else {
	std::cout << "Failed to create ice Materia" << std::endl;
	}

	tmp = src->createMateria("cure");
	if (tmp) {
	std::cout << "Created cure Materia" << std::endl;
	me->equip(tmp);
	} else {
	std::cout << "Failed to create cure Materia" << std::endl;
	}

	ICharacter* bob = new Character("bob");

	std::cout << "Using slot 0 on bob" << std::endl;
	me->use(0, *bob);  // Should print "* shoots an ice bolt at bob *"
	std::cout << "Using slot 1 on bob" << std::endl;
	me->use(1, *bob);  // Should print "* heals bob's wounds *"
	me->equip(tmp);
	me->unequip(0);

	delete bob;
	//delete me;
	delete src;

	system("leaks hell");
	return 0;
}
