/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 22:31:50 by nathan            #+#    #+#             */
/*   Updated: 2021/04/28 23:45:46 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)(roundf(value * (1 << this->_fractional_bits)));
}

Fixed::Fixed(int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = (value << Fixed::_fractional_bits); 
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed&		Fixed::operator=(const Fixed& other) 
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_value = other.getRawBits();
	}
    return *this;
}

std::ostream&	operator<<(std::ostream& os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}


int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((double)this->_value / (double)(1 << this->_fractional_bits));
}

int Fixed::toInt(void) const
{
	return(Fixed::_value >> Fixed::_fractional_bits);
}