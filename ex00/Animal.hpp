/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:17:45 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 18:26:22 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

#define ANIMAL_HPP

#include <iostream>

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

class	Animal
{
	protected:
		std::string	_type;
	public:
		//constructeur par default
		Animal();
		//constructeur par name
		Animal(const std::string& type);
		//constructeur par copie
		Animal(const Animal& copy);
		//destructeur
		virtual ~Animal(void);
		//operateur d'affection
		Animal& 	operator=(const Animal& copy);
		//methods
		virtual void	makeSound(void) const;
		std::string	getType(void) const;
};

#endif
