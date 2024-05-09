/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:56:20 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 18:06:59 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//Constructeur par default
Character::Character()
: _name("Default Character")
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;	
	}
	std::cout << "Character - Default Construcotr : " << _name << std::endl;
}

//Constructeur avec nom
Character::Character(const std::string& name)
: _name (name)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
	std::cout << "Character - Constructor with Name : " << _name << std::endl;
}
//Constructeur par copie
Character::Character(const Character& copy)
{
	std::cout << "Character - Copy Constructor : " << copy.getName() << std::endl;
	*this = copy;

}

// Operator d'affection
Character&	Character::operator=(const Character& copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
		}
		if (!(copy._inventory)[i])
		{
			_inventory[i] = NULL;
		}
		else
		{
			_inventory[i] = (copy._inventory)[i]->clone();
		}
	}
	return (*this);

}
//destructor
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}

	}
}
//methods
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
		delete _inventory[index];
		_inventory[index] = NULL;
	}
	std::cout << _name << "is unequipped" << std::endl;
}

void Character::use (int index, ICharacter &target)
{
	if (index >= 0 && index < 4 && _inventory[index] != NULL)
	{
		_inventory[index]->use(target);
		std::cout << _name << "has used materia" << &target << std::endl;
	}
}
