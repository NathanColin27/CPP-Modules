#include "Cure.hpp"

Cure::Cure() {
}

Cure::~Cure() {
}

Cure::Cure(const Cure & other) {
	*this = other;
}

Cure&		Cure::operator=(const Cure & other) {
	// if (this != &other) {
	// 	this->a = other.a;
	// 	this->b = other.b;
	// 	     ...
	// }
	(void)other; // -Werror -Wextra -Wall
    return *this;
}
