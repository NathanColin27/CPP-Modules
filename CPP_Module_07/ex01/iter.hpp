/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:28:53 by nathan            #+#    #+#             */
/*   Updated: 2021/06/09 10:59:15 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void print(T const &elem)
{
	std::cout << elem << std::endl;
}

template<typename T>
void iter(T *address, size_t len, void(*foo)(T const &x))
{
	for (size_t i = 0; i < len; i++)
	{
		foo(address[i]);
	}
}

template<typename T>
void iter(T *address, size_t len, void(*foo)(T x) )
{
	for (size_t i = 0; i < len; i++)
	{
		foo(address[i]);
	}
}

template<typename T>
void iter(T *address, size_t len, void(*foo)(T *x))
{
	for (size_t i = 0; i < len; i++)
	{
		foo(address[i]);
	}
}

#endif
