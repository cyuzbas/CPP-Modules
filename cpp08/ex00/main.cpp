/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/25 12:54:50 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/25 15:18:14 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int main()
{
	std::cout << std::endl;
	
	std::list<int> test;
	for (int i = 0; i <= 5; i++) {
		test.push_back(i);
	}

	std::list<int>::iterator	it = test.end();
	try{
		it = ::easyfind(test, 2);
		if (it != test.end())
			std::cout << *it << ": Found!!" << std::endl;
	}catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	it = test.end();
	try{
		it = ::easyfind(test, 8);
		if (it != test.end())
			std::cout << *it << ": Found!!" << std::endl;
	}catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}
