/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:55:20 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 12:02:40 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//constructeur par default
WrongCat::WrongCat()
: WrongAnimal("Default WrongCat")
{
	std::cout << "WRONG CAT : " << ORANGE << _type << RESET << " Default constructor called" << std::endl;
}

//constructeur par name
WrongCat::WrongCat(const std::string& type)
: WrongAnimal(type)
{
	std::cout << "WRONG CAT : " << ORANGE << _type << RESET << " Constructor with name initialized called" << std::endl;
}

//constructeur par copie
WrongCat::WrongCat(const WrongCat& copy)
: WrongAnimal(copy.getType())
{
	std::cout << "WRONG CAT : " << ORANGE << copy.getType() << RESET << " Copy constructor called" << std::endl;
	*this = copy;
}

//destructeur
WrongCat::~WrongCat(void)
{
	std::cout << "WRONG CAT : " << ORANGE << _type << RESET << " Destructor called" << std::endl;
}

//operateur d'affection
WrongCat& 	WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "WRONG CAT : " << ORANGE << copy.getType() << RESET << "Operator d'affection called" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}

//methods
void 	WrongCat::makeSound(void) const
{
	std::cout << "WRONG CAT : " << ORANGE << _type << " says : COCORICOOOOO ?!" << RESET << std::endl;
}
