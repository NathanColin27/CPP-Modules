/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:17:57 by ncolin            #+#    #+#             */
/*   Updated: 2021/06/09 12:08:21 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class emptyContainerException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Container is empty");
		}
};

class targetNotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Target is not in container");
		}
};

template<typename T>
int& easyfind(T& container, int target)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), target);
	if (container.empty())
		throw emptyContainerException();
	if (iter == container.end())
		throw targetNotFoundException();
	return *iter;
}



#endif 