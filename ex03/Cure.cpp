/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:33:56 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/26 14:46:39 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//constructeur par default
Cure::Cure()
: AMateria("cure (default)")
{
	std::cout << "Cure - Default Constructor" << std::endl;
}

//constructeur par type
Cure::Cure(const std::string& type)
: AMateria(type)
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
	std::cout << "Cure - Destructor" << std::endl;
}

//operateur d'affection
Cure&	Cure::operator=(const Cure& copy)
{
	std::cout << "Cure - Opertor" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
