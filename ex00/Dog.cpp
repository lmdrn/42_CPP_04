/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:36:00 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 18:36:48 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//constructeur par default
Dog::Dog()
: Animal("Kevin le bouledogue")
{
	std::cout << "Doggo " << GREEN << _type << RESET << " has come to liiiife by DEFAULT" << std::endl;
}
//constructeur par name
Dog::Dog(const std::string& type)
: Animal(type)
{
	std::cout << "Doggo " << GREEN << _type << RESET << " has come to liiiife with TYPE" << std::endl;
}
//constructeur par 
Dog::Dog(const Dog& copy)
: Animal(copy.getType())
{
	std::cout << "Doggox2 " << GREEN << copy.getType() << RESET << " has come to liiiife by COPY" << std::endl;
	*this = copy;
}

//operateur d'affection
Dog& 	Dog::operator=(const Dog& copy)
{
	std::cout << "Doggox3 " << GREEN << _type << RESET << " has come to liiiife by OPERATOR" << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
	}
	return (*this);
}
//destructeur
Dog::~Dog(void)
{
	std::cout << "Doggo " << RED << _type << RESET << " has been destroyed" << std::endl;
}
//methods
void	Dog::makeSound(void) const
{
	std::cout << _type << " makes the sound : " << PURPLE << " WOOF WOOF" << RESET << std::endl;
}
