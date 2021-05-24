/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:17:57 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/24 15:26:54 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
int& easyfind(T& container, int target)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), target);
	if (container.empty())
		throw std::exception();
	if (iter == container.end())
		throw std::exception();
	return *iter;
}

#endif 