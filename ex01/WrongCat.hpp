/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:53:12 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 11:54:33 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP

# define WRONGCAT_HPP

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
	public:
		//constructeur par default
		WrongCat();
		//constructeur par name
		WrongCat(const std::string& type);
		//constructeur par copie
		WrongCat(const WrongCat& copy);
		//destructeur
		virtual ~WrongCat(void);
		//operateur d'affection
		WrongCat& 	operator=(const WrongCat& copy);
		//methods
		void 		makeSound(void) const;
};

#endif
