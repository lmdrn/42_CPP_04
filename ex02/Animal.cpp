/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:34:28 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/25 17:58:31 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//constructeur par default
Animal::Animal()
: _type("iamanimal")
{
	std::cout << "Animal - Constructeur par default " << GREEN << _type << RESET << " has been created by default" << std::endl;
}

//constructeur par name
Animal::Animal(const std::string& type)
: _type(type)
{
	std::cout << "Animal - constructeur par type " <<  GREEN << _type << RESET << " has been created with type" << std::endl;
}

//constructeur par copie
Animal::Animal(const Animal& copy)
: _type(copy._type)
{
	std::cout << "Animal - Constructeur par copie " << ORANGE << _type << RESET << " has been created by copy" << std::endl;
	*this = copy;
}

//operateur d'affection
Animal& 	Animal::operator=(const Animal& copy)
{
	std::cout << "Animal - Operateur d'affection " << ORANGE << _type << RESET << " has been created by operator" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}

//destructeur
Animal::~Animal(void)
{
	std::cout << "Animal - Destructeur " << RED << _type << RESET << " has been destroyed" << std::endl;
}

//methods
void	Animal::makeSound(void) const
{
	std::cout << _type << " makes the sound : " << PURPLE << " one, two, mic check" << RESET << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
