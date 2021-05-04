/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:01:28 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/04 14:18:53 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "Enemy.class.hpp"

class SuperMutant: public Enemy
{
	private:

	public:
		SuperMutant();
		SuperMutant(int hp, std::string const & type);
		~SuperMutant();
		
		SuperMutant(const SuperMutant & other);
		
		SuperMutant&	operator=(const SuperMutant & other);
		void takeDamage(int damage);
};

#endif
