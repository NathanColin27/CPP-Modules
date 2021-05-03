/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:00:42 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/03 15:26:14 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "Victim.class.hpp"

class Peon : public Victim
{
	private:

	public:
		Peon(std::string name);
		Peon(const Peon & x);
		virtual ~Peon();

		Peon&	operator=(const Peon & x);

		virtual void getPolymorphed() const;
};

std::ostream&	operator<<(std::ostream& os, Peon const &other);

#endif