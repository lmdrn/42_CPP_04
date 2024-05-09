/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:44:54 by lmedrano          #+#    #+#             */
/*   Updated: 2024/05/09 18:09:29 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		MateriaSource&	operator=(const MateriaSource& copy);
		virtual ~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(const std::string &type);
};

#endif
