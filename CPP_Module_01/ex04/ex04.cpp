/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:00:35 by ncolin            #+#    #+#             */
/*   Updated: 2021/04/28 12:19:41 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* str_ptr = &str;
	std::string& str_ref = str;
	
	std::cout << "By pointer	"<< *str_ptr << std::endl;
	std::cout << "By reference	"<< str_ref << std::endl;
	return()
}