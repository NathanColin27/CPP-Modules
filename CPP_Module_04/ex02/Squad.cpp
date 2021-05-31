/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:15:49 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/31 13:59:13 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): _count(0), _unit(nullptr)
{
	// std::cout << "Squad constructor called" << std::endl;
}

Squad::~Squad()
{
	// std::cout << "Squad destructor called" << std::endl;
	if (_unit == nullptr)
		return ;
	for (int i = 0; i < _count; i++)
		delete _unit[i];
	delete [] _unit;
}

Squad::Squad(const Squad & other): _count(0), _unit(nullptr)
{
	// std::cout << "Squad copy constructor called" << std::endl;
	*this = other; 
}

Squad&		Squad::operator=(const Squad & other) {
	if(this->_unit)
		delete [] _unit;
	this->_count = 0;
	for(int i = 0; i < other.getCount(); i++)
		this->push(other.getUnit(i)->clone());
	return *this;
}

int Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine* Squad::getUnit(int num) const
{
	if (num > this->getCount() - 1 || num < 0)
		return (nullptr);
	return (this->_unit[num]);
}


int Squad::push(ISpaceMarine* new__unit)
{
	if (this->_count == 0)
	{
		this->_unit = new ISpaceMarine*[1];
		this->_unit[0] = new__unit;
		this->_count++;
	}
	else
	{
		for (int i = 0; i < _count; i++)
			if (_unit[i] == new__unit)
			{
				std::cout << "marine already in squad" << std::endl;
				return (-1);
			}
		ISpaceMarine **copy = new ISpaceMarine*[_count + 1];
		for (int i = 0; i < _count; i++)
			copy[i] = this->_unit[i];
		copy[_count] = new__unit;
		_count++;
		delete [] _unit;
		_unit = copy;
	}
	return (_count);
}