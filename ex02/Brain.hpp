/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:41:38 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/25 16:27:46 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		//constructeur par default
		Brain();
		//constructeur par copie
		Brain(const Brain& copy);
		//destructeur
		~Brain(void);
		//operateur d'affection
		Brain& 	operator=(const Brain& copy);
		std::string	getIdea(int index) const;
};

#endif
