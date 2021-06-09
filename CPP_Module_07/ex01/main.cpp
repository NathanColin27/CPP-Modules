/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:28:44 by nathan            #+#    #+#             */
/*   Updated: 2021/06/09 11:05:38 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Complex
{
	private:
		int _n;
	
	public:
		Complex(int n): _n(n) {};
		bool operator==(Complex const &other) const {return (_n == other._n);}
		bool operator!=(Complex const &other) const {return (_n != other._n);}
		bool operator<(Complex const &other) const {return (_n < other._n);}
		bool operator>(Complex const &other) const {return (_n > other._n);}
		bool operator<=(Complex const &other) const {return (_n <= other._n);}
		bool operator>=(Complex const &other) const {return (_n >= other._n);}
		Complex& operator=(Complex const &other) {_n = other._n; return *this;}
		int getN(void) const{ return this->_n; }
};

std::ostream &operator<<(std::ostream &os, Complex const &other) {os << other.getN(); return os;}

int main(void)
{
	std::string str_array[5] = {".....", "My", "name", "is", "Jeff"};
	iter(str_array, sizeof(str_array)/sizeof(str_array[0]), print<std::string>);
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;
	
	int int_array[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	iter(int_array, sizeof(int_array)/sizeof(int_array[0]), print<int>);
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;
	
	Complex arr[3] = {Complex(42), Complex(19), Complex(21)};
	iter(arr, sizeof(arr)/sizeof(arr[0]), print<Complex>);
	return (0);
}