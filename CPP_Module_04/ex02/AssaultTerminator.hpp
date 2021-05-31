/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 11:15:39 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/31 11:15:40 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
	private:

	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const& other);
		virtual ~AssaultTerminator();

		AssaultTerminator&	operator=(AssaultTerminator const& other);

		virtual void			battleCry() const;
		virtual void			rangedAttack() const;
		virtual void			meleeAttack() const;
		virtual ISpaceMarine*	clone()	const;
};

#endif
