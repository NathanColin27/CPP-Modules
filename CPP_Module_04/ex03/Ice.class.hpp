/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:40:51 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/31 17:33:12 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "AMateria.class.hpp"

class Ice: public AMateria
{
	private:
		std::string _type;
	public:
		Ice();
		Ice(const Ice & other);
		virtual ~Ice();
		
		Ice&	operator=(const Ice & other);

		AMateria*		clone() const;
		virtual void 	use(ICharacter& target);
};

#endif
