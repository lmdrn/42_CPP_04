/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:23:31 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 18:36:55 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//constructeur par default
Cat::Cat()
: Animal("Jean-Edouard")
{
	std::cout << "Miaaaaow! " << GREEN << _type << RESET << " is born by DEFAULT" << std::endl;
}

//constructeur par name
Cat::Cat(const std::string& type)
: Animal(type)
{
	std::cout << "Miaaaaaowx2! " <<  GREEN << _type << RESET << " is born with type" << std::endl;
}

//constructeur par copie
Cat::Cat(const Cat& copy)
: Animal(copy.getType())
{
	std::cout << "Miaaaaaowx3! " <<  GREEN << copy.getType() << RESET << " is born by COPY" << std::endl;
	*this = copy;
}

//operateur d'affection
Cat& 	Cat::operator=(const Cat& copy)
{
	std::cout << "Miaaaaaowx4! " <<  GREEN << _type << RESET << " is born by OPERATOR" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}

//destructeur
Cat::~Cat(void)
{
	std::cout << "Goodbyyyye! " << RED << _type << RESET << " is dead :(" << std::endl;
}

//methods
void	Cat::makeSound(void) const
{
	std::cout << _type << " makes the sound : " << PURPLE << " miaaaaaaaaaaow" << RESET << std::endl;
}
