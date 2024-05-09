/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:21:15 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 16:36:52 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

//declaration anticipee
class ICharacter;

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

class AMateria
{
	protected:
		std::string	_type;
	public:
		//constructeur par default
		AMateria();
		//constructeur par type
		AMateria(const std::string& type);
		//constructeur par copie
		AMateria(const AMateria& copy);
		//operateur d'affection
		AMateria& operator=(const AMateria& copy);
		//destructeur
		virtual ~AMateria();
		//getter
		std::string const &getType() const;
		//method virtual pure
		virtual AMateria* clone() const = 0;
		//method
		virtual void use(ICharacter& target);
};

#endif
