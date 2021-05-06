/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 11:15:41 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/06 11:15:45 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

AMateria::AMateria() {
}

AMateria::~AMateria() {
}

AMateria::AMateria(const AMateria & other) {
	*this = other;
}

AMateria&		AMateria::operator=(const AMateria & other) {
	// if (this != &other) {
	// 	this->a = other.a;
	// 	this->b = other.b;
	// 	     ...
	// }
	(void)other; // -Werror -Wextra -Wall
    return *this;
}
