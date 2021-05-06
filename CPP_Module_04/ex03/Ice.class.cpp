#include "Ice.hpp"

Ice::Ice() {
}

Ice::~Ice() {
}

Ice::Ice(const Ice & other) {
	*this = other;
}

Ice&		Ice::operator=(const Ice & other) {
	// if (this != &other) {
	// 	this->a = other.a;
	// 	this->b = other.b;
	// 	     ...
	// }
	(void)other; // -Werror -Wextra -Wall
    return *this;
}
