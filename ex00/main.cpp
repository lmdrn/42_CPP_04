/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:49:09 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 12:01:13 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "TESTING WITH BASIC ANIMAL" << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                         " << RESET << std::endl;
	const Animal* meta = new Animal();
	const Animal* beta = new Animal("Beta");
	const Animal* delta = beta;
	meta->makeSound();
	beta->makeSound();
	delta->makeSound();
	delete meta;
	delete beta;
	std::cout << RED <<  "                                " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "END OF TESTING WITH BASIC ANIMAL" << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                                " << RESET << std::endl;

	std::cout << RED <<  "                                " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "     TESTING WITH CAT    " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                         " << RESET << std::endl;
	const Animal* i = new Cat();
	std::cout <<  RED << "CAT name is : " << i->getType() << RESET << std::endl;
	i->makeSound();
	delete i;
	const Animal* j = new Cat("Marcus");
	std::cout <<  RED << "CAT name is : " << j->getType() << RESET << std::endl;
	j->makeSound();
	delete j;
	std::cout << RED <<  "                                " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "     END OF TESTING WITH CAT    " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                                " << RESET << std::endl;

	std::cout << RED <<  "                         " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "     TESTING WITH DOG    " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                         " << RESET << std::endl;
	const Animal* c = new Dog();
	std::cout <<  RED << "DOG name is : " << c->getType() << RESET << std::endl;
	c->makeSound();
	delete c;
	const Animal* d = new Dog("Kevin");
	std::cout <<  RED << "DOG name is : " << d->getType() << RESET << std::endl;
	d->makeSound();
	delete d;
	std::cout << RED <<  "                                " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "     END OF TESTING WITH DOG    " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                                " << RESET << std::endl;

	std::cout << RED <<  "                            " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "     TESTING WITH WRONGS    " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                            " << RESET << std::endl;
	const WrongAnimal* a = new WrongCat();
	std::cout <<  RED << "WrongCat name is : " << a->getType() << RESET << std::endl;
	a->makeSound();
	delete a;
	const WrongAnimal* b = new WrongCat("Philippe");
	std::cout <<  RED << "WrongCat name is : " << b->getType() << RESET << std::endl;
	b->makeSound();
	delete b;
	std::cout << RED <<  "                                   " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "     END OF TESTING WITH WRONGS    " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                                   " << RESET << std::endl;

	return (0);	
}
