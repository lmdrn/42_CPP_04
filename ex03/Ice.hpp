/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:09:53 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/26 14:45:17 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

//declaration anticipee
class ICharacter;

class Ice : public AMateria
{
	public:
		//constructeur par default
		Ice();
		//constructeur par type
		Ice(const std::string& type);
		//constrcuteur par copie
		Ice(const Ice& copy);
		//destructeur
		~Ice();
		//operateur d'affection
		Ice&	operator=(const Ice& copy);
		//methods
		//methode virtual pure
		virtual	Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif
