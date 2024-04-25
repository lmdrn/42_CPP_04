/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:37:21 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/25 17:44:10 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
	//main from subject
	std::cout << GREEN << "______________________________________" << RESET << std::endl;
	std::cout << GREEN << "CREATE AND DESTROY ONE CAT AND ONE DOG" << RESET << std::endl;
	std::cout << GREEN << "______________________________________" << RESET << std::endl;
	const Animal* j = new Dog("Le Chien");
	const Animal* i = new Cat("Le Chat");
	delete j;//should not create a leak
	delete i;
	std::cout << GREEN << "______________________________________" << RESET << std::endl;
	std::cout << GREEN << "ADDITIONAL TESTS" << RESET << std::endl;
	std::cout << GREEN << "______________________________________" << RESET << std::endl;
	//additional tests
	Animal *animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << animals[i]->getIdea(0) << std::endl;
	}

	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}

	return (0);
}
