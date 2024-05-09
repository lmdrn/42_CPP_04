/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:35:53 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 11:45:16 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//constructeur par default
Dog::Dog()
: Animal("Default Dog")
{
	std::cout << "DOG : " << PURPLE << _type << RESET << " Default construcotr called" << std::endl;
}

//constructeur par name
Dog::Dog(const std::string& type)
: Animal(type)
{
	std::cout << "DOG : " << PURPLE << _type << RESET << " Construcotr initialized with name called" << std::endl;
}

//constructeur par copie
Dog::Dog(const Dog& copy)
: Animal(copy.getType())
{
	std::cout << "DOG : " << PURPLE << copy.getType() << RESET << " Copy Constructor called" << std::endl;
	*this = copy;
}

//destructeur
Dog::~Dog(void)
{
	std::cout << "DOG : " << PURPLE << _type << RESET << " Destructor called" << std::endl;
}

//operateur d'affection
Dog& 	Dog::operator=(const Dog& copy)
{
	std::cout << "DOG : " << PURPLE << _type << RESET << " Operator d'affection called" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}

//methods
void	Dog::makeSound(void) const
{
	std::cout << "DOG : " << PURPLE << _type << " is saying : WOOF WOOF" << RESET << std::endl;
}

