/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:35:57 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/25 16:58:28 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//constructeur par default
Dog::Dog()
: Animal("Chien par default"), brain(new Brain)
{
	std::cout << "Dog - Constructeur par default :  " << GREEN << _type << RESET << " has come to liiiife by DEFAULT" << std::endl;
}
//constructeur par name
Dog::Dog(const std::string& type)
: Animal(type)
{
	std::cout << "Dog - Constructeur par type " << GREEN << _type << RESET << " has come to liiiife with TYPE" << std::endl;
}
//constructeur par 
Dog::Dog(const Dog& copy)
: Animal(copy.getType()), brain(new Brain(*copy.brain))
{
	std::cout << "Dog - Constructeur par copie " << GREEN << copy.getType() << RESET << " has come to liiiife by COPY" << std::endl;
	*this = copy;
}

//operateur d'affection
Dog& 	Dog::operator=(const Dog& copy)
{
	std::cout << "Dog - Operateur d'affection " << GREEN << _type << RESET << " has come to liiiife by OPERATOR" << std::endl;
	if (this != &copy)
	{
		//free exisiting brain
		delete brain;
		//copy profonde
		brain = new Brain(*copy.brain);
		_type = copy._type;
	}
	return (*this);
}
//destructeur
Dog::~Dog(void)
{
	delete brain;
	std::cout << "Dog - Destructeur " << RED << _type << RESET << " has been destroyed" << std::endl;
}
//methods
void	Dog::makeSound(void) const
{
	std::cout << _type << " makes the sound : " << PURPLE << " WOOF WOOF" << RESET << std::endl;
}

std::string Dog::getIdea(int index) const
{
	return (brain->getIdea(index));
}
