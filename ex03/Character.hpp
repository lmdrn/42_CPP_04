/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:48:12 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/24 12:05:00 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private :
		std::string	_name;
		AMateria*	_inventory[4];
	public:
		//Constructeur par default
		Character();
		//Constructeur avec nom
		Character(const std::string name);
		//Constructeur par copie
		Character(const Character& copy);
		// Operator d'affection
		Character&	operator=(const Character& copy);
		//destructor
		virtual ~Character();
		//methods
		virtual const std::string &getName() const;
		virtual void equip(AMateria *m);
		virtual void unequip(int index);
		virtual void use (int index, ICharacter &target);
};

#endif

