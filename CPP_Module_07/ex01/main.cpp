/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:28:44 by nathan            #+#    #+#             */
/*   Updated: 2021/05/23 14:50:53 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	std::string array[5] = {".....", "My", "name", "is", "Jeff"};
	iter(array, sizeof(array)/sizeof(array[0]), print);
}