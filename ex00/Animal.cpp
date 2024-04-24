/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   by: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   created: 2024/04/24 16:25:41 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 18:37:01 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//constructeur par default
Animal::Animal()
: _type("iamanimal")
{
	std::cout << "alohaaaa! " << GREEN << _type << RESET << " has been created by default" << std::endl;
}

//constructeur par name
Animal::Animal(const std::string& type)
: _type(type)
{
	std::cout << "alohaaaa! " <<  GREEN << _type << RESET << " has been created with type" << std::endl;
}

//constructeur par copie
Animal::Animal(const Animal& copy)
: _type(copy._type)
{
	std::cout << "alohaaaa!x2 " << ORANGE << _type << RESET << " has been created by copy" << std::endl;
	*this = copy;
}

//operateur d'affection
Animal& 	Animal::operator=(const Animal& copy)
{
	std::cout << "alohaaaa!x3 " << ORANGE << _type << RESET << " has been created by operator" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}

//destructeur
Animal::~Animal(void)
{
	std::cout << "auf wiedersehen! " << RED << _type << RESET << " has been destroyed" << std::endl;
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

