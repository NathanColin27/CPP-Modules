/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:00:42 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/03 15:07:20 by ncolin           ###   ########.fr       */
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
		const std::string _name;
		Peon();
	public:
		Peon(std::string name);
		Peon(const Peon & x);
		~Peon();

		Peon&	operator=(const Peon & x);

		std::string	const& get_name(void) const;
		void getPolymorphed() const;
};

std::ostream&	operator<<(std::ostream& os, Peon const &other);

#endif