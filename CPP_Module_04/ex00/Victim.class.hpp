/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:37:28 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/30 12:41:37 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Victim
{
	protected:
		std::string _name;
		Victim();
	public:
		Victim(std::string name);
		Victim(Victim const& other);
		virtual ~Victim();

		Victim&	operator=(Victim const& other);

		std::string	const& get_name(void) const;
		virtual void getPolymorphed() const;
};

std::ostream&	operator<<(std::ostream& os, Victim const &other);

#endif
