/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 12:44:34 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/01 16:19:39 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "ICharacter.class.hpp"
#include "AMateria.class.hpp"

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria* 	_inventory[4];
		Character();
	public:
		Character(std::string name);
		Character(const Character & other);
		virtual ~Character();

		Character&	operator=(const Character & other);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
