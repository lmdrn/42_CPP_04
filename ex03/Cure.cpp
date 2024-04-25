/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:33:56 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/25 18:39:15 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//constructeur par default
Cure::Cure()
{
	std::cout << "Cure - Default Constructor" << std::endl;
}

//constructeur par type
Cure::Cure(const std::string& type)
{
	std::cout << "Cure - Constructor with Type" << std::endl;
}

//constrcuteur par copie
Cure::Cure(const Cure& copy)
{
	std::cout << "Cure - Copy Constructor" << std::endl;
	*this = copy;
}

//destructeur
Cure::~Cure()
{
	std::cout << "Cure - Destructor" < std::endl;
}

//operateur d'affection
Cure&	Cure::operator=(const Cure& copy);
{
	std::cout << "Cure - Opertor" < std::endl;
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

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << _type << "'s wounds *" << std::endl;
}
