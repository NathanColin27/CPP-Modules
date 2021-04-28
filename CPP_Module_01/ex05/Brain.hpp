/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:21:20 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/28 12:59:47 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include <sstream>

class Brain
{

private:
	int _weight;
public:
	Brain();
	~Brain();
	std::string identify() const;
};

#endif
