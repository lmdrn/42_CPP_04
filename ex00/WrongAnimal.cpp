/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   by: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   created: 2024/04/24 16:25:41 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 18:36:29 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//constructeur par default
WrongAnimal::WrongAnimal()
: _type("iamwrong")
{
	std::cout << "alohaaaa! " << GREEN << _type << RESET << " has been created by default" << std::endl;
}

//constructeur par name
WrongAnimal::WrongAnimal(const std::string& type)
: _type(type)
{
	std::cout << "alohaaaa! " <<  GREEN << _type << RESET << " has been created with type" << std::endl;
}

//constructeur par copie
WrongAnimal::WrongAnimal(const WrongAnimal& copy)
: _type(copy._type)
{
	std::cout << "alohaaaa!x2 " << ORANGE << _type << RESET << " has been created by copy" << std::endl;
	*this = copy;
}

//operateur d'affection
WrongAnimal& 	WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "alohaaaa!x3 " << ORANGE << _type << RESET << " has been created by operator" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}

//destructeur
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "auf wiedersehen! " << RED << _type << RESET << " has been destroyed" << std::endl;
}

//methods
void	WrongAnimal::makeSound(void) const
{
	std::cout << _type << " makes the sound : " << PURPLE << " THIS.IS.WROOOOOOONG ! SO WROOOONG" << RESET << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

