/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:03:33 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/25 18:08:20 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

# define AMATERIA_HPP

class AMateria
{
	protected:
		int	_type;
	public:
		//constructeur par default
		AMateria();
		//constructeur par type
		AMateria(const std::string& type);
		//constrcuteur par copie
		AMateria(const AMateria& copy);
		//destructeur
		~AMateria();
		//operateur d'affection
		AMateria&	operator=(const AMateria& copy);
		//getters
		std::string const &getType() const;
		//methods
		//methode virtual pure
		virtual	AMateria* clone() const = 0;
		virtual void use(ICharacter& target);


};

#endif
