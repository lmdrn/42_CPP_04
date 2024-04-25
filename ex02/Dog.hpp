/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:36:16 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/25 16:43:14 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

//colors
#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

class	Dog : public Animal
{
	private :
		Brain	*brain;
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
		Dog& 		operator=(const Dog& copy);
		//methods
		void		makeSound(void) const;
		std::string	getIdea(int index) const;
};

#endif
