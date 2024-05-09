/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:34:00 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 16:43:30 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

//declaration anticpee
class Icharacter;

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

class Cure : virtual public AMateria
{
	public:
		//constructeur par default
		Cure();
		//constructeur par type
		Cure(const std::string& type);
		//constructeur par copie
		Cure(const Cure& copy);
		//operateur d'affection
		Cure& operator=(const Cure& copy);
		//destructeur
		virtual ~Cure();
		//method virtual pure
		virtual Cure* clone() const;
		//method
		virtual void use(ICharacter& target);
};

#endif
