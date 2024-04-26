/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:11:37 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/26 14:30:58 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		_materias[i] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	*this = copy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
	if (this != &copy)
	{}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete _materias[i];
	}
}

//methods
void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == nullptr)
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
		if (_materias[i] != nullptr && _materias[i]->getType() == type)
		{
			return (_materias[i]->clone());
		}
	}
	return (nullptr);
}
