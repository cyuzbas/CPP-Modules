/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/30 13:45:23 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/30 15:57:37 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
	std::cout << std::endl << PINK << "Welcome to Harls complaining session";
	std::cout << RESET << std::endl << std::endl;
	return;
}

Harl::~Harl(void){
	std::cout << std::endl << PINK << "GOODBYE!";
	std::cout << RESET << std::endl << std::endl;
	return;
}

void Harl::debug( void ){
	std::cout << BLUE << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup ";
	std::cout << "burger. I really do!" << RESET << std::endl;
}

void Harl::info( void ){
	std::cout << GREEN << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn't be asking for more!" << RESET << std::endl;
}

void Harl::warning( void ){
	std::cout << YELLOW << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working ";
	std::cout << "here since last month." << RESET << std::endl;
}

void Harl::error( void ){
	std::cout << RED << "This is unacceptable! I want to speak to the manager now.";
	std::cout << RESET << std::endl;
}

void Harl::complain( std::string level ){
	
	void (Harl::*f[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
    	if (levels[i] == level)
			(this->*f[i])();
	
}
