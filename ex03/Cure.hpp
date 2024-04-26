/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:09:53 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/26 14:44:54 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

//declaration anticipee
class ICharacter;

class Cure : public AMateria
{
	public:
		//constructeur par default
		Cure();
		//constructeur par type
		Cure(const std::string& type);
		//constrcuteur par copie
		Cure(const Cure& copy);
		//destructeur
		~Cure();
		//operateur d'affection
		Cure&	operator=(const Cure& copy);
		//getters
		std::string const &getType() const;
		//methods
		//methode virtual pure
		virtual	Cure* clone() const;
		virtual void use(ICharacter& target);
};

#endif
