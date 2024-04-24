/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:34:36 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/24 18:24:23 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

//colors
#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

class	Cat : virtual public Animal
{
	public:
		//constructeur par default
		Cat();
		//constructeur par name
		Cat(const std::string& type);
		//constructeur par copie
		Cat(const Cat& copy);
		//destructeur
		~Cat(void);
		//operateur d'affection
		Cat& 	operator=(const Cat& copy);
		//methods
		virtual void	makeSound(void) const;
};

#endif
