/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:17:54 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 15:58:58 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//constructeur par default
Cat::Cat()
: Animal("Default Cat"), _brain(new Brain)
{
	std::cout << "CAT : " << ORANGE << _type << RESET << " Default constructor called" << std::endl;
}

//constructeur par name
Cat::Cat(const std::string& type)
: Animal(type), _brain(new Brain)
{
	std::cout << "CAT : " << ORANGE << _type << RESET << " Constructor with name initialized called" << std::endl;
}

//constructeur par copie
Cat::Cat(const Cat& copy)
: Animal(copy.getType())
{
	std::cout << "CAT : " << ORANGE << copy.getType() << RESET << " Copy constructor called" << std::endl;
	*this = copy;
}

//destructeur
Cat::~Cat(void)
{
	delete _brain;
	std::cout << "CAT : " << ORANGE << _type << RESET << " Destructor called" << std::endl;
}

//operateur d'affection
Cat& 	Cat::operator=(const Cat& copy)
{
	std::cout << "CAT : " << ORANGE << copy.getType() << RESET << "Operator d'affection called" << std::endl;
	if (this != &copy)
	{
		//free any existing brain;
		delete _brain;
		//copy profounde
		_brain = new Brain(*copy._brain);
		_type = copy._type;
	}
	return (*this);
}

//methods
void 	Cat::makeSound(void) const
{
	std::cout << "CAT : " << ORANGE << _type << " says : MeeeeOoOOOOOoow" << RESET << std::endl;
}

void 	Cat::printIdeas(void) const
{
	if (_brain)
	{
		for (int i = 0; i < 100; i++)
		{
			std::cout << "CAT IDEA NBR " << GREEN << i + 1 << RESET << " : " << _brain->getIdeas(i) << std::endl;
		}
	}
	else
		std::cout << RED << "NO BRAIN." << RESET << std::endl;
}
