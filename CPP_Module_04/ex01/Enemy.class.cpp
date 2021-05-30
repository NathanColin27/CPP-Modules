#include "Enemy.class.hpp"

Enemy::~Enemy()
{
}

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type) 
{
	std::cout << "An enemy of type " << type << " appeared!" << std::endl;
}

Enemy::Enemy(const Enemy & other)
{
	*this = other;
	std::cout << "The enemy has a clone!" << std::endl;
}

Enemy&		Enemy::operator=(const Enemy & other) {
	if (this != &other) 
	{
		this->_hp = other._hp;
		this->_type = other._type;
	}
    return *this;
}

void Enemy::takeDamage(int damage)
{
	if (_hp > damage)
		_hp -= damage;
	else
		_hp = 0;	
}

std::string Enemy::getType(void) const
{
	return (this->_type);
}

int Enemy::getHP(void) const
{
	return (this->_hp);
}

