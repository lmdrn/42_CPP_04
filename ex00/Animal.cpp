/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:53:03 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 11:10:13 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//constructeur par default
Animal::Animal()
: _type("Default Animal")
{
	std::cout << "ANIMAL : " << GREEN << _type << RESET << " Default constructor called" << std::endl;
}

//constructeur par name
Animal::Animal(const std::string& type)
: _type(type)
{
	std::cout << "ANIMAL : " << GREEN << _type << RESET << " Constructor with name initialized called" << std::endl;
}
//constructeur par copie
Animal::Animal(const Animal& copy)
: _type(copy._type)
{
	std::cout << "ANIMAL : " << GREEN << copy.getType() << RESET << " Copy constructor called" << std::endl;
	*this = copy;	
}
//destructeur
Animal::~Animal(void)
{
	std::cout << "ANIMAL : " << GREEN << _type << RESET << " Destructor called" << std::endl;
}
//operateur d'affection
Animal& 	Animal::operator=(const Animal& copy)
{
	std::cout << "ANIMAL : " << GREEN << copy.getType() << RESET << " Operator d'affection called" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);

}
//methods
void Animal::makeSound(void) const
{
	std::cout << "ANIMAL : " << GREEN << _type << " is making a sound" << RESET << std::endl;
}
//getters
std::string	Animal::getType(void) const
{
	return (this->_type);
}
