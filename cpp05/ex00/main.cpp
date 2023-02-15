/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 16:51:31 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/15 11:38:38 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) {

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_1 ] : incrementGrade (2 >> 1) " << RESET << std::endl;
    try {
        Bureaucrat b("Michael", 2);
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_2 ] : incrementGrade (5 >> ?) " << RESET << std::endl;
	Bureaucrat b("Jim", 5);
    while (true) {
		try {
	        std::cout << b << std::endl;
	        b.incrementGrade();
	    }
	    catch (std::exception& e) {
	        std::cerr << e.what() << std::endl;
			break;
	    }
	}
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_3 ] : decrementGrade (1 >> 2) " << RESET << std::endl;
    try {
        Bureaucrat b("Dwight", 1);
        std::cout << b << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_4 ] : decrementGrade (148 >> ?) " << RESET << std::endl;
	Bureaucrat b("Pam", 148);
	while (true) {
	    try {
	        std::cout << b << std::endl;
	        b.decrementGrade();
	    }
	    catch (std::exception& e) {
	        std::cerr << e.what() << std::endl;
			break;
	    }
	}
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_5 ] : Starting with a TooHighGrade (0 >> ?) " << RESET << std::endl;
    try {
        Bureaucrat b("Kevin", 0);
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

{
    std::cout << std::endl;
    std::cout << CYAN << "[ TEST_6 ] : Starting with a TooLowGrade (151 >> ?) " << RESET << std::endl;
    try {
        Bureaucrat b("Creed", 151);
        std::cout << b << std::endl;
        b.decrementGrade();
        std::cout << b << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
{
	std::cout << CYAN << std::endl;
	std::cout << "[ TEST_7 ] : Copy / Copy Assignment operator test " << RESET<< std::endl;
	Bureaucrat Angela("Angela", 5);
	Bureaucrat Phyllis("Phyllis", 8);
	std::cout << "Angela = Phyllis" << std::endl;
	Angela = Phyllis;
	std::cout << Angela << std::endl;
	Bureaucrat Copy(Phyllis);
	std::cout << Copy << std::endl;
	
}
// while(42){};
}
