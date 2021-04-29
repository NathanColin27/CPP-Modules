#include "FragTrap.class.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "Hey everybody! Check out my package!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
	*this = other;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
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

void	FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage" << std::endl; 
	std::cout << "Eat bomb, baddie!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_attack_damage << " points of damage" << std::endl; 
	std::cout << "Pain school is now in session." << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5] =
	{
		"I am a tornado of death and bullets!",
		"Grenaaaade!",
		"Bad guy go boom!", 
		"Meat confetti!",
		"There is now gunk on my chassis."
	};
	this->_energy_points -= 25;
	if (this->_energy_points < 0)
	{
		this->_energy_points = 0;
		std::cout << "FR4G-TP " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	else
	{
		int attack = rand() % 5;
		int damage = rand() % 100 + 1;
		std::cout << "FR4G-TP " << this->_name << " shouts \"" << attacks[attack] << "\" and inflicts " << damage << " points of damage to " << target << std::endl; 
	}
}
