/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:06:47 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 18:29:01 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP

#include <iostream>

//colors
#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

class	WrongAnimal
{
	protected:
		std::string	_type;
	public:
		//constructeur par default
		WrongAnimal();
		//constructeur par name
		WrongAnimal(const std::string& type);
		//constructeur par copie
		WrongAnimal(const WrongAnimal& copy);
		//destructeur
		~WrongAnimal(void);
		//operateur d'affection
		WrongAnimal& 	operator=(const WrongAnimal& copy);
		//methods
		void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif
