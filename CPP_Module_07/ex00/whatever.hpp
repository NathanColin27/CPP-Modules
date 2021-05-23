/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathan <nathan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:14:58 by nathan            #+#    #+#             */
/*   Updated: 2021/05/23 14:25:14 by nathan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

//create a class whatever with operators overloads to prove it works

template<typename T>
void	swap(T &src, T &dst)
{
	T tmp = src;
	src = dst;
	dst = tmp; 
}

template<typename T>
T	min(T &src, T &dst)
{
	return (src < dst ? src : dst);
}

template<typename T>
T	max(T &src, T &dst)
{
	return (src > dst ? src : dst);	
}
#endif