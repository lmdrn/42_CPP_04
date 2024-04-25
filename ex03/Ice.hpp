/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:09:53 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/25 18:13:34 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public Ice
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
		//getters
		std::string const &getType() const;
		//methods
		//methode virtual pure
		virtual	Ice* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
