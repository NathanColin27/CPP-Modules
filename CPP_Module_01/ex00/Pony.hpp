/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 21:01:19 by nathan            #+#    #+#             */
/*   Updated: 2021/04/27 22:43:59 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Pony
{
	private:
		int			_age;
		std::string	_name;
		
	public:
		Pony();
		Pony(std::string name);
		~Pony();
		void		sing(std::string song);
		int			get_age(void) const;
		void		set_age(int age);
		std::string	get_name(void) const;
		void		set_name(std::string name);
		void		say_name(void);
};

#endif