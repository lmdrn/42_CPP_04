/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:35:13 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/25 17:43:16 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//constructeur par default
Cat::Cat()
: Animal("Chat par Default"), brain(new Brain)
{
	std::cout << "Cat - Constructeur : " << GREEN << _type << RESET << " is born by DEFAULT" << std::endl;
}

//constructeur par name
Cat::Cat(const std::string& type)
: Animal(type)
{
	std::cout << "Cat - Constructeur avec type : " <<  GREEN << _type << RESET << " is born with type" << std::endl;
}

//constructeur par copie
Cat::Cat(const Cat& copy)
: Animal(copy.getType())
{
	std::cout << "Cat - Constructeur par copie : " <<  GREEN << copy.getType() << RESET << " is born by COPY" << std::endl;
	*this = copy;
}

//operateur d'affection
Cat& 	Cat::operator=(const Cat& copy)
{
	std::cout << "Cat - Operateur d'affection : " <<  GREEN << _type << RESET << " is born by OPERATOR" << std::endl;
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
Cat::~Cat(void)
{
	delete brain;
	std::cout << "Cat - Destructeur : " << RED << _type << RESET << " is dead :(" << std::endl;
}

//methods
void	Cat::makeSound(void) const
{
	std::cout << _type << " makes the sound : " << PURPLE << " miaaaaaaaaaaow" << RESET << std::endl;
}

std::string Cat::getIdea(int index) const
{
	return (brain->getIdea(index + 1));
}
