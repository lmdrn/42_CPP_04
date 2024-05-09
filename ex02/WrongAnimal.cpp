/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:51:32 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 11:53:06 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//constructeur par default
WrongAnimal::WrongAnimal()
: _type("Default WrongAnimal")
{
	std::cout << "WRONG ANIMAL : " << GREEN << _type << RESET << " Default constructor called" << std::endl;
}

//constructeur par name
WrongAnimal::WrongAnimal(const std::string& type)
: _type(type)
{
	std::cout << "WRONG ANIMAL : " << GREEN << _type << RESET << " Constructor with name initialized called" << std::endl;
}
//constructeur par copie
WrongAnimal::WrongAnimal(const WrongAnimal& copy)
: _type(copy._type)
{
	std::cout << "WRONG ANIMAL : " << GREEN << copy.getType() << RESET << " Copy constructor called" << std::endl;
	*this = copy;	
}
//destructeur
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WRONG ANIMAL : " << GREEN << _type << RESET << " Destructor called" << std::endl;
}
//operateur d'affection
WrongAnimal& 	WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "WRONG ANIMAL : " << GREEN << copy.getType() << RESET << " Operator d'affection called" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);

}
//methods
void WrongAnimal::makeSound(void) const
{
	std::cout << "WRONG ANIMAL : " << GREEN << _type << " is making the wrong sound" << RESET << std::endl;
}
//getters
std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
