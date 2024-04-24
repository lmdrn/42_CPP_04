/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:26:00 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 18:36:11 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal("Coucou");
	const Animal* j = new Dog("Bichon");
	const Animal* i = new Cat("Ron");
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	// Additional Tests
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongJ = new WrongCat();
	std::cout << wrongJ->getType() << " " << std::endl;
	wrongJ->makeSound();
	wrongMeta->makeSound();

	// Clean everything
	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongJ;

	return (0);
}
