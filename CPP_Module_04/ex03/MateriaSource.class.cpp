/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 16:01:45 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/01 16:00:41 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource() 
{
	std::cout << "Constructor by default called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->_learned[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "Destructor called" << std::endl;

	for(int i = 0; i < 4; i++)
		delete(this->_learned[i]);
}

MateriaSource::MateriaSource(const MateriaSource & other)
{
	std::cout << "Constructor by copy called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->_learned[i] = NULL;
	}
	*this = other;
}

MateriaSource&		MateriaSource::operator=(const MateriaSource & other)
{
	int	i;

	if (this != &other)
	{
		i = -1;
		while (++i < 4 && _learned[i])
			delete _learned[i];
		i = -1;
		while (++i < 4 && other._learned[i])
			_learned[i] = other._learned[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* mat)
{
	if (mat == NULL)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if (this->_learned[i] == NULL)
		{
			this->_learned[i] = mat;
			return ;
		}
		
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (_learned[i])
			if (this->_learned[i]->getType() == type)
				return (this->_learned[i]->clone());
	}
	return (NULL);
}