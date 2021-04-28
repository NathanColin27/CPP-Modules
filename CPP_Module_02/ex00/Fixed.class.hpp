/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 22:31:33 by nathan            #+#    #+#             */
/*   Updated: 2021/04/28 23:19:44 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <unistd.h>

class Fixed
{
	private:
		int 				_value;
		static const int	_bits_number = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& other);
		
		Fixed&	operator=(const Fixed& other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif