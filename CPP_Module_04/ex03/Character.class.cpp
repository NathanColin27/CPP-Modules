#include "Character.hpp"

Character::Character() {
}

Character::~Character() {
}

Character::Character(const Character & other) {
	*this = other;
}

Character&		Character::operator=(const Character & other) {
	// if (this != &other) {
	// 	this->a = other.a;
	// 	this->b = other.b;
	// 	     ...
	// }
	(void)other; // -Werror -Wextra -Wall
    return *this;
}
