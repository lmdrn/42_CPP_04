/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:52:34 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/26 15:20:20 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//constructeur par default
Character::Character()
: _name("Default Character")
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	std::cout << "Character - Default Constructor : " << _name << std::endl;
}

//constructeur par type
Character::Character(const std::string& name)
: _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	std::cout << "Character - Constructor with name : " << _name << std::endl;
}

//constrcuteur par copie
Character::Character(const Character& copy)
{
	std::cout << "Character - Copy Constructor : " << copy.getName() << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (!(copy._inventory)[i])
			_inventory[i] = NULL;
		else
			_inventory[i] = (copy._inventory)[i]->clone();
	}
	_name = copy._name;
}

//destructeur
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		delete _inventory[i];
		_inventory[i] = NULL;
	}
}

//operateur d'affection
Character&	Character::operator=(const Character& copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (!(copy._inventory)[i])
			_inventory[i] = NULL;
		else
			_inventory[i] = (copy._inventory)[i]->clone();
	}
	return (*this);
}

//MVPs
const std::string &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int index)
{
	if (index >= 0 && index < 4 && _inventory[index] != NULL)
	{
		_inventory[index] = NULL;
	}
}

void Character::use(int index, ICharacter &target)
{
	if (index >= 0 && index < 4 && _inventory[index] != NULL)
	{
		_inventory[index]->use(target);
	}
}
