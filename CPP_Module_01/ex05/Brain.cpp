/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:20:48 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/26 22:21:25 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_weight = 3;
}

Brain::~Brain()
{
}

std::string Brain::identify() const
{
	std::ostringstream address;
	address << (void *)this;
	
	std::string name = address.str();
	return (name);
}
