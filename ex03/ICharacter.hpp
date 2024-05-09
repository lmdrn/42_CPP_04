/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:48:15 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 16:50:44 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP

# define ICHARACTER_HPP

#include "AMateria.hpp"

//declaration anticipee
class AMateria;

class ICharacter
{
	public:
		//destructor
		virtual ~ICharacter() {};
		// pure virtual methods
		virtual const std::string &getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int index) = 0;
		virtual void use (int index, ICharacter &target) = 0;
};

#endif

