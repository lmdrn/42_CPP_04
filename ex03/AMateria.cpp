/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:29:52 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/26 14:53:22 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//constructeur par default
AMateria::AMateria()
: _type("AMateria Default")
{
	std::cout << "AMateria Default Constructor" << std::endl;
}

//constructeur par type
AMateria::AMateria(const std::string& type)
: _type(type)
{
	std::cout << "AMateria Constructor avec Type" << _type << std::endl;
}

//constrcuteur par copie
AMateria::AMateria(const AMateria& copy)
:_type(copy._type)
{
	std::cout << "AMateria Copy Constructor" << std::endl;
	*this = copy;
}

//destructeur
AMateria::~AMateria()
{
	std::cout << "AMateria Default Constructor" << std::endl;
}

//operateur d'affection
AMateria&	AMateria::operator=(const AMateria& copy)
{
	std::cout << "AMateria Operator Constructor" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}

//getters
std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* Default use() for Amateria" << target.getName() << " *" << std::endl;
}
