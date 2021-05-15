/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 16:01:45 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/15 16:01:46 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource() 
{
	for(int i = 0; i < 4; i++)
	{
		this->learned[i] = nullptr;
	}
}

MateriaSource::~MateriaSource() {
}

MateriaSource::MateriaSource(const MateriaSource & other) {
	*this = other;
}

MateriaSource&		MateriaSource::operator=(const MateriaSource & other) {
	// if (this != &other) {
	// 	this->a = other.a;
	// 	this->b = other.b;
	// 	     ...
	// }
	(void)other; // -Werror -Wextra -Wall
    return *this;
}

void	MateriaSource::learnMateria(AMateria* mat)
{
	if (mat == nullptr)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if (this->learned[i] == nullptr)
		{
			this->learned[i] = mat;
			return ;
		}
		
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->learned[i]->getType() == type)
			return (this->learned[i]->clone());
	}
	return (nullptr);
}