/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:35:17 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/24 15:15:32 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

//declaration anticpee
class ICharacter;

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

class Ice : virtual public AMateria
{
	public:
		//constructeur par default
		Ice();
		//constructeur par copie
		Ice(const Ice& copy);
		//operateur d'affection
		Ice& operator=(const Ice& copy);
		//destructeur
		virtual ~Ice();
		//method virtual pure
		virtual AMateria* clone() const;
		//method
		virtual void use(ICharacter& target);
};

#endif
