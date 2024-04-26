/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:24:50 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/26 14:54:28 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP

# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		//destructeur
		virtual ~IMateriaSource() {};
		//MVPs
		virtual void learnMateria(AMateria*) = 0;
		virtual	AMateria* createMateria(const std::string &type) = 0;
};

#endif
