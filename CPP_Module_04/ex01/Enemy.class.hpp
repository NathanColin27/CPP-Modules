#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Enemy
{
	protected:
		int		_hp;
		std::string _type;
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const& other);
		virtual ~Enemy();
		
		Enemy&	operator=(const Enemy & other);
		
		int				getHP() const;
		std::string		getType() const;
		virtual void	takeDamage(int);
};

#endif
