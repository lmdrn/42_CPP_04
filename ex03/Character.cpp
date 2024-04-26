/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:52:34 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/26 14:35:29 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//constructeur par default
Character::Character()
: _name("Default Character")
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = nullptr;
	}
	std::cout << "Character - Default Constructor : " << _name << std::endl;
}

//constructeur par type
Character::Character(const std::string& name)
: _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = nullptr;
	}
	std::cout << "Character - Constructor with name : " << _name << std::endl;
}

//constrcuteur par copie
Character::Character(const Character& copy)
: _name(copy._name)
{
	std::cout << "Character - Copy Constructor : " << copy.getName() << std::endl;
	*this = copy;
}

//destructeur
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete _inventory[i];
	}
}

//operateur d'affection
Character&	Character::operator=(const Character& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
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
		if (_inventory[i] == nullptr)
		{
			_inventory[i] = m->clone();
			return ;
		}
	}
}

void Character::unequip(int index)
{
	if (index >= 0 && index < 4 && _inventory[index] != nullptr)
	{
		_inventory[index] = nullptr;
	}
}

void Character::use(int index, ICharacter &target)
{
	if (index >= 0 && index < 4 && _inventory[index] != nullptr)
	{
		_inventory[index]->use(target);
	}
}
