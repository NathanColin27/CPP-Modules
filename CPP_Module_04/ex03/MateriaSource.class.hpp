#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class MateriaSource
{
	private:

	public:
		MateriaSource();
		MateriaSource(const MateriaSource & other);
		~MateriaSource();

		MateriaSource&	operator=(const MateriaSource & other);
};

#endif
