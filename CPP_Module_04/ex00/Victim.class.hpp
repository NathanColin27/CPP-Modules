/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:37:28 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/03 14:50:59 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Victim
{
	private:
		const std::string _title;
		const std::string _name;
		Victim();
	public:
		Victim(std::string name);
		Victim(const Victim & x);
		~Victim();

		Victim&	operator=(const Victim & x);

		std::string	const& get_name(void) const;
		void getPolymorphed() const;
};

std::ostream&	operator<<(std::ostream& os, Victim const &other);

#endif
