/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:12:47 by nathan            #+#    #+#             */
/*   Updated: 2021/06/09 10:43:09 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

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
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	::swap(a, b);
	std::cout << "AFTER SWAP : a = " << a << ", b = " << b << std::endl;
	
	
	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;

	
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	::swap(c, d);
	std::cout << "AFTER SWAP : c = " << c << ", d = " << d << std::endl;

	std::cout << std::endl << "-----------------------"<< std::endl << std::endl;
	
	Complex big(100);
	Complex lil(1);
	
	std::cout << "big = " << big << ", lil = " << lil << std::endl;
	std::cout << "min( big, lil ) = " << ::min(big, lil) << std::endl;
	std::cout << "max( big, lil ) = " << ::max(big, lil) << std::endl;
	::swap(big, lil);
	std::cout << "AFTER SWAP : big = " << big << ", lil = " << lil << std::endl;
	
	return 0;
}