/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:47:59 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 12:04:10 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP

#include <iostream>

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		//constructeur par default
		WrongAnimal();
		//constructeur par name
		WrongAnimal(const std::string& type);
		//constructeur par copie
		WrongAnimal(const WrongAnimal& copy);
		//destructeur
		virtual ~WrongAnimal(void);
		//operateur d'affection
		WrongAnimal& 	operator=(const WrongAnimal& copy);
		//methods
		void 		makeSound(void) const;
		//getter
		std::string	getType(void) const;
};

#endif
