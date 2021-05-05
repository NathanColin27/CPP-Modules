/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:49:28 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/05 19:37:55 by ncolin           ###   ########.fr       */
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
		~TacticalMarine();
		TacticalMarine(const TacticalMarine & other);

		TacticalMarine&	operator=(const TacticalMarine & other);

		ISpaceMarine*	clone() const;
		virtual void	battleCry() const;
		virtual void	rangedAttack() const;
		virtual void	meleeAttack() const;
};

#endif
