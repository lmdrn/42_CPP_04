/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:29:52 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/25 18:33:40 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//constructeur par default
AMateria::AMateria()
{
	std::cout << "AMateria Default Constructor" << std::endl;
}

//constructeur par type
AMateria::AMateria(const std::string& type)
{
	std::cout << "AMateria Constructor avec Type" << std::endl;
}

//constrcuteur par copie
AMateria::AMateria(const AMateria& copy)
{
	std::cout << "AMateria Copy Constructor" << std::endl;
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
}

//getters
std::string const &getType() const
{
	return (this->_type);
}
