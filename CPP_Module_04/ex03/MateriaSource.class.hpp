/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:27:42 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/31 16:10:05 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "IMateriaSource.class.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *learned[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & other);
		virtual ~MateriaSource();

		MateriaSource&	operator=(const MateriaSource & other);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
