/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:14:06 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/25 18:18:54 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP

# define ICHARACTER_HPP

class ICharacter
{
	private:
		std::string	_name;
		AMateria	_inventory[4];
	public:
		//constructeur par default
		ICharacter();
		//constructeur par type
		ICharacter(const std::string& name);
		//constrcuteur par copie
		ICharacter(const ICharacter& copy);
		//destructeur
		~ICharacter();
		//operateur d'affection
		ICharacter&	operator=(const ICharacter& copy);
		//MVPs
		virtual -ICharacter();
		virtual const std::string &getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void use(int index, ICharacter &target) = 0;
};

#endif
