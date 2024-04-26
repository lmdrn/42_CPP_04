/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:03:33 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/26 14:45:55 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

//declaration anticipee
class ICharacter;

class AMateria
{
	protected:
		std::string		_type;
	public:
		//constructeur par default
		AMateria();
		//constructeur par type
		AMateria(const std::string& type);
		//constrcuteur par copie
		AMateria(const AMateria& copy);
		//destructeur
		virtual ~AMateria();
		//operateur d'affection
		AMateria&		operator=(const AMateria& copy);
		//getters
		std::string const &getType() const;
		//methods
		//methode virtual pure
		virtual	AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);


};

#endif
