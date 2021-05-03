/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:38:04 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/03 14:52:16 by ncolin           ###   ########.fr       */
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
		const std::string _title;
		const std::string _name;
		Sorcerer();
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer & x);
		~Sorcerer();

		Sorcerer&	operator=(const Sorcerer & x);

		std::string const& get_title(void) const;
		std::string	const& get_name(void) const;
		void polymorph(Victim const &) const;
};

std::ostream&	operator<<(std::ostream& os, Sorcerer const &other);

#endif
