/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:49:28 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/31 11:15:13 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	private:

	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine & other);
		virtual ~TacticalMarine();

		TacticalMarine&	operator=(const TacticalMarine & other);

		ISpaceMarine*	clone() const;
		virtual void	battleCry() const;
		virtual void	rangedAttack() const;
		virtual void	meleeAttack() const;
};

#endif
