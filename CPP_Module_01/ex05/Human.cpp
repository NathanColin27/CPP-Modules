/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:21:34 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/26 22:24:53 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human() {
}


const Brain& Human::getBrain(void) const
{
	return (this->_Brain);
}

std::string Human::identify(void) const
{
	return (this->_Brain.identify());
}