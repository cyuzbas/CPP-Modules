/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 16:26:39 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 17:29:16 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void){
	
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;
	
	std::cout << "Memory address of string:\t" << &string << std::endl;
	std::cout << "Memory address of stringPTR:\t" << stringPTR << std::endl;
	std::cout << "Memory address of stringREF:\t" << &stringREF << std::endl;
	std::cout << std::endl;
	
	std::cout << "Value of string variable:\t\t" << string << std::endl;
	std::cout << "Value pointed to by stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF:\t" << stringREF << std::endl;
	std::cout << std::endl;
	
	return (0);
}