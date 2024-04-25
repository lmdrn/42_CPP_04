/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:49:19 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/25 17:04:00 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//constructeur par default
Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = "Idea : " + std::to_string(i + 1);
	}
	std::cout << "Brain has been created" << std::endl;
}
//constructeur par copie
Brain::Brain(const Brain& copy)
{
	*this = copy;
}

//operateur d'affection
Brain& 	Brain::operator=(const Brain& copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = copy._ideas[i];
	}
	return (*this);
}

//destructeur
Brain::~Brain(void)
{
	std::cout << "Brain has been destroyed" << std::endl;
}

std::string	Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (_ideas[index]);
	else
		return "";
}
