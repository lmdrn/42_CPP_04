/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   by: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   created: 2024/04/24 16:25:41 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 18:36:36 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//constructeur par default
WrongCat::WrongCat()
: WrongAnimal("Minette")
{
	std::cout << "alohaaaa! " << GREEN << _type << RESET << " has been created by default" << std::endl;
}

//constructeur par name
WrongCat::WrongCat(const std::string& type)
: WrongAnimal(type)
{
	std::cout << "alohaaaa! " <<  GREEN << _type << RESET << " has been created with type" << std::endl;
}

//constructeur par copie
WrongCat::WrongCat(const WrongCat& copy)
: WrongAnimal(copy.getType())
{
	std::cout << "alohaaaa!x2 " << ORANGE << copy.getType() << RESET << " has been created by copy" << std::endl;
	*this = copy;
}

//operateur d'affection
WrongCat& 	WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "alohaaaa!x3 " << ORANGE << _type << RESET << " has been created by operator" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}

//destructeur
WrongCat::~WrongCat(void)
{
	std::cout << "auf wiedersehen! " << RED << _type << RESET << "has been destroyed" << std::endl;
}

//methods
void	WrongCat::makeSound(void) const
{
	std::cout << _type << " makes the sound : " << PURPLE << "Miaow je suis un faux chat" << RESET << std::endl;
}

std::string	WrongCat::getType(void) const
{
	return (this->_type);
}

