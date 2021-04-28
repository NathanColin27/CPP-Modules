/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:20:48 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/28 12:59:58 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	this->_weight = 3;
}

Brain::~Brain() {
}

std::string Brain::identify() const
{
	std::ostringstream address;
	address << (void *)this;
	
	std::string name = address.str();
	return (name);
}
