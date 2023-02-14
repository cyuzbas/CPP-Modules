/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 16:51:31 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/14 21:55:48 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// int main( void ) {

// {
//     std::cout << std::endl;
//     std::cout << CYAN << "[ TEST_1 ] : incrementGrade (2 >> 1) " << RESET << std::endl;
//     try {
//         Bureaucrat b("Bureaucrat", 2);
//         std::cout << b << std::endl;
//         b.incrementGrade();
//         std::cout << b << std::endl;
//     }
//     catch (std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }
// }

// {
//     std::cout << std::endl;
//     std::cout << CYAN << "[ TEST_2 ] : incrementGrade (1 >> ?) " << RESET << std::endl;
//     try {
//         Bureaucrat b("Bureaucrat", 1);
//         std::cout << b << std::endl;
//         b.incrementGrade();
//         std::cout << b << std::endl;
//     }
//     catch (std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }
// }

// {
//     std::cout << std::endl;
//     std::cout << CYAN << "[ TEST_3 ] : decrementGrade (1 >> 2) " << RESET << std::endl;
//     try {
//         Bureaucrat b("Bureaucrat", 1);
//         std::cout << b << std::endl;
//         b.decrementGrade();
//         std::cout << b << std::endl;
//     }
//     catch (std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }
// }

// {
//     std::cout << std::endl;
//     std::cout << CYAN << "[ TEST_4 ] : decrementGrade (150 >> ?) " << RESET << std::endl;
//     try {
//         Bureaucrat b("Bureaucrat", 150);
//         std::cout << b << std::endl;
//         b.decrementGrade();
//         std::cout << b << std::endl;
//     }
//     catch (std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }
// }

// {
//     std::cout << std::endl;
//     std::cout << CYAN << "[ TEST_5 ] : Starting with a TooHighGrade (0 >> ?) " << RESET << std::endl;
//     try {
//         Bureaucrat b("Bureaucrat", 0);
//         std::cout << b << std::endl;
//         b.incrementGrade();
//         std::cout << b << std::endl;
//     }
//     catch (std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }
// }

// {
//     std::cout << std::endl;
//     std::cout << CYAN << "[ TEST_6 ] : Starting with a TooLowGrade (151 >> ?) " << RESET << std::endl;
//     try {
//         Bureaucrat b("Bureaucrat", 151);
//         std::cout << b << std::endl;
//         b.decrementGrade();
//         std::cout << b << std::endl;
//     }
//     catch (std::exception& e) {
//         std::cerr << e.what() << std::endl;
//     }
// }
// std::cout << std::endl;
// while(42){};
// }


int	main(void) {

	std::cout << std::endl;
	Bureaucrat Michel("Michel", 1);
	std::cout << Michel;
	Bureaucrat Claudia("Claudia", 150);
	std::cout << Claudia;
	std::cout << std::endl;
	try {
		std::cout << "Initializing bureaucrat with grade 0." << std::endl;
		Bureaucrat Chad("Chad", 0);
		std::cout << Chad;
	}
	catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat Patricia("Patricia", 33);
	while (true) {
		
		try {
			std::cout << Patricia;
			std::cout << "incrementing grade" << std::endl;
			Patricia.incrementGrade();
		}
		catch(std::exception& e) {
			std::cerr << e.what() << std::endl;
			break;
		}
	}
	std::cout << std::endl;
	try {
		std::cout << Claudia;
		std::cout << "decrementing grade" << std::endl;
		Claudia.decrementGrade();
	}
	catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Claudia = Patricia" << std::endl;
	Claudia = Patricia;
	std::cout << Claudia;
	std::cout << std::endl;
	std::cout << "Bureaucrat Copy(Patricia)" << std::endl;
	Bureaucrat Copy(Patricia);
	std::cout << Copy;
	std::cout << std::endl;
	return 0;
}