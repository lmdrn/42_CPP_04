/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:33:49 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 11:46:50 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

#include "Animal.hpp"
#include <iostream>

//colors
#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

class Dog : virtual public Animal
{
	public:
		//constructeur par default
		Dog();
		//constructeur par name
		Dog(const std::string& type);
		//constructeur par copie
		Dog(const Dog& copy);
		//destructeur
		~Dog(void);
		//operateur d'affection
		Dog& 	operator=(const Dog& copy);
		//methods
		virtual void	makeSound(void) const;
};

#endif
