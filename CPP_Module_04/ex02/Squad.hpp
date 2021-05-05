#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "ISquad.hpp"


class Squad: public ISquad
{
	private:
		int				_count;
		ISpaceMarine	**_unit;
	public:
		Squad();
		Squad(const Squad & other);
		~Squad();

		Squad&	operator=(const Squad & other);

		virtual int 			getCount() const;
		virtual ISpaceMarine* 	getUnit(int) const;
		virtual int				push(ISpaceMarine*);
};

#endif
