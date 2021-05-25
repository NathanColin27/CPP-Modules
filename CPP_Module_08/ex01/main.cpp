/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:35:22 by ncolin            #+#    #+#             */
/*   Updated: 2021/05/25 17:21:49 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.class.hpp"

int main()
{
	srand(time(0));
	Span sp = Span(1000);
	std::list<int>::iterator it;
	it = sp.getNumbers().begin();
	for(int i = 0; i < 1000; i++)
	{
		sp.addNumber(rand()%100000);
		std::advance(it, 1);
		std::cout << *it << std::endl;
	}
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}