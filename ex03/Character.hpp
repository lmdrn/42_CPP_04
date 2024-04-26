/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:52:39 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/26 14:23:02 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_inventory[4];
	public:
		//constructeur par default
		Character();
		//constructeur par type
		Character(const std::string& name);
		//constrcuteur par copie
		Character(const Character& copy);
		//destructeur
		virtual ~Character();
		//operateur d'affection
		Character&	operator=(const Character& copy);
		//MVPs
		const std::string &getName() const;
		void equip(AMateria *m);
		void unequip(int index);
		void use(int index, ICharacter &target);
};

#endif
