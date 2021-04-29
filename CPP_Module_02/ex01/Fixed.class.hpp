/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 22:31:56 by nathan            #+#    #+#             */
/*   Updated: 2021/04/29 10:19:28 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <cmath>

class Fixed
{
	private:
		int 				_value;
		static const int	_fractional_bits = 8;
	public:
		Fixed();
		virtual ~Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& other);
		
		Fixed&	operator=(const Fixed& other);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed &obj);
#endif