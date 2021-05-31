/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:15:53 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/31 11:20:15 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "ISquad.hpp"


class Squad: public ISquad
{
	private:
		int				_count;
		ISpaceMarine	**_unit;
	public:
		Squad();
		Squad(const Squad & other);
		virtual ~Squad();

		Squad&	operator=(const Squad & other);

		virtual int 			getCount() const;
		virtual ISpaceMarine* 	getUnit(int n) const;
		virtual int				push(ISpaceMarine* marine);
};

#endif
