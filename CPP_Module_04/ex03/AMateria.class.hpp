/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 11:15:48 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/07 13:26:48 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "ICharacter.class.hpp"
class ICharacter;
class AMateria
{
	protected:
		std::string	_type;
		unsigned int _xp;
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & other);
		virtual ~AMateria();
		
		AMateria&	operator=(const AMateria & other);
		
		std::string const & getType() const;
		unsigned int		getXP() const;
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif
