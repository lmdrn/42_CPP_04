/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:13:03 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 15:55:37 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//constructeur par default
Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = std::to_string(i + 1);
	}
	std::cout << "BRAIN : Default Constructor called" << std::endl;
}
//constructeur par copie
Brain::Brain(const Brain& copy)
{

	std::cout << "BRAIN : Copy Constructor called" << std::endl;
	*this = copy;
}
//destructeur
Brain::~Brain(void)
{
	std::cout << "BRAIN : Destructor called" << std::endl;
}
//operateur d'affection
Brain& 	Brain::operator=(const Brain& copy)
{
	std::cout << "BRAIN : Operator d'Affection called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		(this->_ideas)[i] = copy.getIdeas(i);
	}
	return (*this);
}
//getter
std::string	Brain::getIdeas(int index) const
{
	if (index >= 0 && index <= 100)
	{
		return (_ideas[index]);
	}
	else
		return ("coucou");
}
