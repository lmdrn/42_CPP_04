/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:56:20 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/24 15:26:14 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//Constructeur par default
Character::Character()
: _name("Default Character")
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;	
	}
	std::cout << "Character - Default Construcotr : " << _name << std::endl;
}

//Constructeur avec nom
Character::Character(const std::string name)
: _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	std::cout << "Character - Constructor with Name : " << _name << std::endl;
}
//Constructeur par copie
Character::Character(const Character& copy)
: _name(copy._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i] != NULL)
		{
			_inventory[i] = copy._inventory[i]->clone();
		}
		else
		{
			_inventory[i] = NULL;
		}
	}
	std::cout << "Character - Copy Constructor : " << copy.getName() << std::endl;
}

// Operator d'affection
Character&	Character::operator=(const Character& copy)
{
	if (this != &copy)
	{
		_name = copy._name;
	}
	for (int i = 0; i < 4; i++)
	{
		delete _inventory[i];
		if (copy._inventory[i] != NULL)
		{
			_inventory[i] = copy._inventory[i]->clone();
		}
		else
		{
			_inventory[i] = NULL;	
		}
	}
	return (*this);
}
//destructor
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete _inventory[i];
	}
}
//methods
std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}
	std::cout << _name << " is equipped" << std::endl;
}
void Character::unequip(int index)
{
	if (index >= 0 && index < 4 && this->_inventory[index] != NULL)
	{
		delete _inventory[index];
		this->_inventory[index] = NULL;
	}
	std::cout << _name << " is unequipped" << std::endl;
}

void Character::use (int index, ICharacter &target)
{
	if (index >= 0 && index < 4 && this->_inventory[index] != NULL)
	{
		this->_inventory[index]->use(target);
	}
}
