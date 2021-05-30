/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:38:04 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/30 12:12:21 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "Victim.class.hpp"

class Sorcerer
{
	private:
		std::string _title;
		std::string _name;
		Sorcerer();
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const& x);
		~Sorcerer();

		Sorcerer&	operator=(Sorcerer const& x);

		std::string const& get_title(void) const;
		std::string	const& get_name(void) const;
		void polymorph(Victim const &) const;
};

std::ostream&	operator<<(std::ostream& os, Sorcerer const &other);

#endif
