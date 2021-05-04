/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:15:40 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/04 16:55:09 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.class.hpp"
#include "PlasmaRiffle.class.hpp"
#include "PowerFist.class.hpp"
#include "Enemy.class.hpp"
#include "SuperMutant.class.hpp"
#include "RadScorpion.class.hpp"
#include "Character.class.hpp"

int main(void)
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRiffle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	return 0;
	// PlasmaRiffle *Plasma = new PlasmaRiffle;
	// SuperMutant  *Mutant = new SuperMutant;
	// RadScorpion  *Rad = new RadScorpion;
	// Character *Vault_boy = new Character;
	// std::cout << Mutant->getHP() << std::endl;
	// std::cout << "RadScorpion HP: " << Rad->getHP() << std::endl;
	// std::cout << *Vault_boy << std::endl;
	// Plasma->attack();
	// Vault_boy->equip(Plasma);
	// std::cout << *Vault_boy << std::endl;
	// Vault_boy->attack(Rad);
	// std::cout << "RadScorpion HP: " << Rad->getHP() << std::endl;
	// std::cout << *Vault_boy << std::endl;
	// Vault_boy->attack(Rad);
	// std::cout << "RadScorpion HP: " << Rad->getHP() << std::endl;
	// std::cout << *Vault_boy << std::endl;
	// Vault_boy->attack(Rad);
	// std::cout << "RadScorpion HP: " << Rad->getHP() << std::endl;
	// std::cout << *Vault_boy << std::endl;
	// Vault_boy->attack(Rad);
	// std::cout << "RadScorpion HP: " << Rad->getHP() << std::endl;
	// std::cout << *Vault_boy << std::endl;
	// // Vault_boy->attack(Rad);
	// // std::cout << "RadScorpion HP: " << Rad->getHP() << std::endl;
	// // std::cout << *Vault_boy << std::endl;
	// delete(Rad);

	
	// // delete (Plasma);
	// // delete (Mutant);
	// // delete (Vault_boy);
	// return	(0);
}