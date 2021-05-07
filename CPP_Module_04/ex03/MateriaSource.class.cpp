#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource() {
}

MateriaSource::~MateriaSource() {
}

MateriaSource::MateriaSource(const MateriaSource & other) {
	*this = other;
}

MateriaSource&		MateriaSource::operator=(const MateriaSource & other) {
	// if (this != &other) {
	// 	this->a = other.a;
	// 	this->b = other.b;
	// 	     ...
	// }
	(void)other; // -Werror -Wextra -Wall
    return *this;
}
