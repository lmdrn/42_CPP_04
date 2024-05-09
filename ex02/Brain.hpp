/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:09:42 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 15:31:51 by lmedrano         ###   ########.fr       */
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
		//getters
		std::string	getIdeas(int index) const;
};
#endif
