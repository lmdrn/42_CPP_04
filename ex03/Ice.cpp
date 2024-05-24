/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:45:43 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/24 15:16:05 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//constructeur par default
Ice::Ice()
: AMateria("ice")
{
	std::cout << ORANGE << "Ice : Default constructeur called" << RESET << std::endl;
}

//constructeur par copie
Ice::Ice(const Ice& copy)
{
	std::cout << ORANGE << "Ice : Copy constructeur called" << RESET << std::endl;
	*this = copy;
}
//operateur d'affection
Ice& Ice::operator=(const Ice& copy)
{
	std::cout << ORANGE << "Ice : Operator d'affection called" << RESET << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}
//destructeur
Ice::~Ice()
{
	std::cout << ORANGE << "Ice : Destructeur called" << RESET << std::endl;
}

//method virtual pure
AMateria* Ice::clone() const
{
	return (new Ice(*this));
}
//method
void Ice::use(ICharacter& target)
{
	std::cout << "Ice : * shoots an ice bolt at " << ORANGE << target.getName() << RESET << " *" << std::endl;
}
