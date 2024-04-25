/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:39:28 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/25 18:40:57 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//constructeur par default
Ice::Ice()
{
	std::cout << "Ice - Default Constructor" << std::endl;
}

//constructeur par type
Ice::Ice(const std::string& type)
{
	std::cout << "Ice - Constructor with Type" << std::endl;
}

//constrcuteur par copie
Ice::Ice(const Ice& copy)
{
	std::cout << "Ice - Copy Constructor" << std::endl;
	*this = copy;
}

//destructeur
Ice::~Ice()
{
	std::cout << "Ice - Destructor" < std::endl;
}

//operateur d'affection
Ice&	Ice::operator=(const Ice& copy);
{
	std::cout << "Ice - Operator" < std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}

std::string const &getType() const
{
	return (this->_type);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << _type << " *" << std::endl;
}
