#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(std::string name): _name(name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "New ClapTrap manufactured!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap Destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		this->_hit_points = other._hit_points;
		this->_max_hit_points = other._max_hit_points;
		this->_energy_points = other._energy_points;
		this->_max_energy_points = other._max_energy_points;
		this->_level = other._level;
		this->_melee_attack_damage = other._melee_attack_damage;
		this->_ranged_attack_damage = other._ranged_attack_damage;
		this->_armor_damage_reduction =other._armor_damage_reduction;
	}
    return *this;
}

void	ClapTrap::rangedAttack(std::string const& target)
{
	std::cout << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage" << std::endl; 
	std::cout << "You're listening to 'Short-Range Damage Radio'." << std::endl;
}

void	ClapTrap::meleeAttack(std::string const& target)
{
	std::cout << this->_name << " attacks " << target << " at melee, causing " << this->_melee_attack_damage << " points of damage" << std::endl; 
	std::cout << "Meet professor punch!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->_armor_damage_reduction)
		amount = 0;
	else
		amount = amount - this->_armor_damage_reduction;
	if (amount > this->_max_hit_points)
		amount = this->_max_hit_points;
	if (amount >= this->_hit_points)
		this->_hit_points = 0;
	else
		this->_hit_points -= amount;
	std::cout << "SC4V-TP " << this->_name << " takes " << amount << " damages" << std::endl;
	if (amount > 0)
		std::cout << "I'm leaking!" << std::endl;
	std::cout << "Current HP : " << this->_hit_points << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hit_points += amount;
	if (this->_hit_points > 100)
		this->_hit_points = 100;
	std::cout << "SC4V-TP " << this->_name << " gets repaired, he regains " << amount << " hps" << std::endl;
	std::cout << "Healsies!" << std::endl;
	std::cout << "Current HP : " << this->_hit_points << std::endl;
}
