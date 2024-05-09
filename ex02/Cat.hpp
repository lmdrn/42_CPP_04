/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:15:31 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 15:28:55 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define ORANGE "\x1b[38;5;208m"
#define RED "\x1b[31m"
#define PURPLE "\x1b[35m"

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
	private:
		Brain*	_brain;
	public:
		//constructeur par default
		Cat();
		//constructeur par name
		Cat(const std::string& type);
		//constructeur par copie
		Cat(const Cat& copy);
		//destructeur
		virtual ~Cat(void);
		//operateur d'affection
		Cat& 	operator=(const Cat& copy);
		//methods
		virtual void 	makeSound(void) const;
		virtual void 	printIdeas(void) const;
};

#endif
