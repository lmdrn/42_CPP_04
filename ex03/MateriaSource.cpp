/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:49:01 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 18:10:23 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i ++)
	{
		_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource (const MateriaSource& copy)
{
	*this = copy;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == NULL)
		{
			delete _materias[i];
		}
		if (copy._materias[i] != NULL)
		{
			_materias[i] = copy._materias[i]->clone();
		}
		else
		{
			_materias[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete _materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == NULL)
		{
			_materias[i] = m->clone();
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] != NULL && _materias[i]->getType() == type)
		{
			return (_materias[i]->clone());
		}
	}
	return (NULL);
}
