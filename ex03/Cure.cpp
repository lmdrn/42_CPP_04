/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:38:09 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/24 15:09:02 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//constructeur par default
Cure::Cure()
: AMateria("cure")
{
	std::cout << PURPLE << "Cure : Default constructeur called" << RESET << std::endl;
}
//constructeur par copie
Cure::Cure(const Cure& copy)
{
	std::cout << PURPLE << "Cure : Copy constructeur called" << RESET << std::endl;
	*this = copy;
}
//operateur d'affection
Cure& Cure::operator=(const Cure& copy)
{
	std::cout << PURPLE << "Cure : Operator d'affection called" << RESET << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}
//destructeur
Cure::~Cure()
{
	std::cout << PURPLE << "Cure : Destructeur called" << RESET << std::endl;
}

//method virtual pure
AMateria* Cure::clone() const
{
	return (new Cure(*this));
}
//method
void Cure::use(ICharacter& target)
{
	std::cout << "Cure : * heals " << PURPLE << target.getName() << RESET << "'s wounds *" << std::endl;
}
