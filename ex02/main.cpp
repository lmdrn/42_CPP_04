/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:49:09 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 16:15:13 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
//	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
//	std::cout << RED <<  "CREATING AN ANIMAL SHOULD THROW ERROR" << RESET << std::endl;
//	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
//	std::cout << RED <<  "                                     " << RESET << std::endl;
//
//	Animal *beast = new Animal();
//	delete beast;

	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "CREATING AND DELETING ANIMALS' LIST" << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                                   " << RESET << std::endl;
	//declare 10 animals
	Animal *bestioles[10];
	

	//assign 1st 5's as Dog
	for (int i = 0; i < 5; i++)
	{
		bestioles[i] = new Dog();	
	}

	//assign last 5's as Cat
	for (int i = 5; i < 10; i++)
	{
		bestioles[i] = new Cat();
	}

	//delete everyone properly
	for (int i = 0; i < 10; i++)
	{
		delete bestioles[i];
	}
	std::cout << RED <<  "                                      " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "END OF CREATION/DELETION ANIMAL'S LIST" << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                                      " << RESET << std::endl;


	std::cout << RED <<  "                                      " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "         PRINT CATS N DOGS IDEAS      " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                                      " << RESET << std::endl;
	//declare a cat and a dog and print their ideas;
	Animal *a = new Dog();
	Animal *b = new Cat();
	a->printIdeas();
	std::cout << RED <<  "                                      " << RESET << std::endl;
	b->printIdeas();
	delete a;
	delete b;
	std::cout << RED <<  "                                      " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "       END OF CATS N DOGS IDEAS       " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                                      " << RESET << std::endl;

	std::cout << RED <<  "                                      " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "            CHECK DEEP COPY           " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                                      " << RESET << std::endl;
	//declare a Dog and check it is not a shallow copy
	Animal *basic = new Dog();
	Animal *tmp = basic;
	tmp->makeSound();
	delete basic;
	std::cout << RED <<  "                                      " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "           END OF DEEP COPY           " << RESET << std::endl;
	std::cout << RED <<  "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << RESET << std::endl;
	std::cout << RED <<  "                                      " << RESET << std::endl;

	return (0);	
}
