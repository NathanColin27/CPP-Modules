/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:01:28 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/30 14:22:01 by ncolin           ###   ########.fr       */
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
		SuperMutant(SuperMutant const& other);
		virtual ~SuperMutant();
		
		SuperMutant&	operator=(SuperMutant const& other);
		
		void takeDamage(int damage);
};

#endif
