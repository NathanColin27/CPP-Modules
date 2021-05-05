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
		AssaultTerminator(const AssaultTerminator & other);
		~AssaultTerminator();

		AssaultTerminator&	operator=(const AssaultTerminator & other);

		virtual void			battleCry() const;
		virtual void			rangedAttack() const;
		virtual void			meleeAttack() const;
		virtual ISpaceMarine*	clone()	const;
};

#endif
