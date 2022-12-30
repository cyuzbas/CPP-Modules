/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/30 13:45:34 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/30 16:17:20 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ){
	
	std::string level;
	Harl harl;
	
	std::cout << "Harl is capable of complaining about these topics" << std::endl << std::endl;
	std::cout << "DEBUG : ";
	harl.complain("DEBUG");
	std::cout << "INFO: ";
	harl.complain("INFO");
	std::cout<< "WARNING: ";
	harl.complain("WARNING");
	std::cout<< "ERROR: ";
	harl.complain("ERROR");
	std::cout << std::endl;
	
	std::cout << GRAY << "You will have 4 choices to make." << std::endl;
	std::cout << "Please make a complain choice by typing;" << std::endl;
	std::cout << "'DEBUG' or 'INFO' or 'WARNING' or 'ERROR'" << std::endl;
	std::cout << "(Any other choice will be ignored!)"  << RESET << std::endl;
	
	for (int i = 0; i < 4; i++)
	{
		std::cout << std::endl << "Your choice: ";
		std::getline(std::cin, level);
		std::cout << std::endl;

		if (std::cin.eof() == true)
			break;
			
		harl.complain(level);
	}

	return (EXIT_SUCCESS);
}
