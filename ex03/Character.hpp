/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:48:12 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 18:06:25 by lmedrano         ###   ########.fr       */
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
		Character(const std::string& name);
		//Constructeur par copie
		Character(const Character& copy);
		// Operator d'affection
		Character&	operator=(const Character& copy);
		//destructor
		virtual ~Character();
		//methods
		const std::string &getName() const;
		void equip(AMateria *m);
		void unequip(int index);
		void use (int index, ICharacter &target);
};

#endif

