/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:49:01 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/24 14:52:59 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		knownMaterias[i] = NULL;
	}
}

MateriaSource::MateriaSource (const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy.knownMaterias[i] != NULL)
		{
			knownMaterias[i] = copy.knownMaterias[i]->clone();
		}
		else
		{
			knownMaterias[i] = NULL;
		}

	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			delete knownMaterias[i];
			if (copy.knownMaterias[i] != NULL)
			{
				knownMaterias[i] = copy.knownMaterias[i]->clone();
			}
			else
			{
				knownMaterias[i] = NULL;
			}
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete knownMaterias[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (knownMaterias[i] == NULL)
		{
			knownMaterias[i] = m;
			std::cout << "Learned " << m->getType() << " materia." << std::endl; // Debug print
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (knownMaterias[i] != NULL && knownMaterias[i]->getType() == type)
		{
			std::cout << "Creating " << type << " materia." << std::endl; // Debug print
			return (knownMaterias[i]->clone());
		}
	}
	std::cout << "Error while trying to create " << type << " materia." << std::endl; // Debug print
	return (NULL);
}
