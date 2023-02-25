/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/25 15:23:25 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/25 21:00:48 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "------ 1.Filling span using a range of iterators ------" << std::endl;
	try {
        std::vector<int> myVector;
        Span mySpan(10000);

        for (int i = 0; i < 10000; i++) {
            myVector.push_back(i);
        }
        mySpan.addNumbers(myVector.begin(), myVector.end());
        std::cout << "Shortest span: " << mySpan.shortestSpan() << std::endl;
        std::cout << "Longest span: " << mySpan.longestSpan() << std::endl;

        mySpan.addNumber(1);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
	
	
	std::cout << std::endl;
	std::cout << "------ 2.Filling span using a range of Integers ------" << std::endl;
	try {
        Span span = Span(10000);
		span.addIntRange(0, 10000);

        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;

    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
	
	
	std::cout << std::endl;
	std::cout << "------ 3.Filling span using AddNumber with integer ------" << std::endl;
    try {
        Span mySpan(10);

        mySpan.addNumber(1);
        // mySpan.addNumber(12);
        // mySpan.addNumber(18);

        std::cout << "Shortest span: " << mySpan.shortestSpan() << std::endl;
        std::cout << "Longest span: " << mySpan.longestSpan() << std::endl;
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
	
	
	std::cout << std::endl;
	std::cout << "------ 4.Max N is 0 ------" << std::endl;
    try{
		Span wrongSpan(0);
    } catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

	std::cout << std::endl;
	std::cout << "------ TEST FROM SUBJECT ------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}