/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:26:10 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 18:05:31 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//constructeur par default
AMateria::AMateria()
: _type("AMateria Default")
{
	std::cout << GREEN << "AMateria : Default Constrcutor called!" << RESET << std::endl;
}

//constructeur par type
AMateria::AMateria(const std::string& type)
: _type(type)
{
	std::cout << GREEN << "AMateria : Default Constructor with TYPE called!" << RESET << std::endl;
}

//constructeur par copie
AMateria::AMateria(const AMateria& copy)
: _type(copy._type)
{
	std::cout << GREEN << "AMateria : Copy Constructor called!" << RESET << std::endl;
	*this = copy;
}

//operateur d'affection
AMateria& AMateria::operator=(const AMateria& copy)
{
	std::cout << GREEN << "AMateria : Operator d'affection called!" << RESET << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}
//destructeur
AMateria::~AMateria()
{
	std::cout << GREEN << "AMateria : Destructor called!" << RESET << std::endl;
}
//getter
std::string const &AMateria::getType() const
{
	return (this->_type);
}

//method
void AMateria::use(ICharacter& target)
{
	std::cout << GREEN << "AMateria : Using " << target.getName() << RESET << std::endl;
}
