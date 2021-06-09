/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolin <ncolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 14:56:13 by nathan            #+#    #+#             */
/*   Updated: 2021/06/09 11:23:56 by ncolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class Complex
{
	private:
		int _n;
	
	public:
		Complex(int n): _n(n) {};
		Complex(): _n(0) {};
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


	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|------------------TEST1---------------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	
	Array<int> test1(3);
	std::cout << "Size : "<< test1.size() << std::endl;
	std::cout << "[test1]" << std::endl << test1 << std::endl;

	try
	{
		for (size_t i = 0; i < test1.size(); i++)
			test1[i] = i;
			
		std::cout << "[test1]" << std::endl << test1 << std::endl;
		test1[2] = 6.0; 
		test1[1] = static_cast<int>(9.5f); 
		std::cout << "[test1]" << std::endl << test1 << std::endl;
		test1[-1] = 5; // index out of bound
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << "|------------------TEST2---------------------|" << std::endl;
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;

	//Deep copy + assignation
	Array<int> test2 = test1;
	std::cout << "[test1]" << std::endl << test1 << std::endl;
	std::cout << "[test2]" << std::endl << test2 << std::endl;
	test1[0] = 42;
	std::cout << "[test1]" << std::endl << test1 << std::endl;
	std::cout << "[test2]" << std::endl << test2 << std::endl;
	
	std::cout << std::endl << 	">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	std::cout << 				"|------------------TEST3---------------------|" << std::endl;
	std::cout << 				"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl << std::endl;
	

	try
	{
		Array<Complex> test3(3);
		std::cout << "[test3]" << std::endl << test3 << std::endl;
		test3[0] = 42;
		test3[1] = 19;
		std::cout  << test3[1] << std::endl;
		std::cout << std::endl << "[test3]" << std::endl << test3 << std::endl;
		std::cout << test3[5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}