/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 15:42:45 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/19 19:52:18 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	Phonebook	phone;
	std::string	choice;

	while (true)
	{
		std::cout << "Please make a choice by typing; ADD or SEARCH or EXIT: ";
		std::getline(std::cin, choice);
		std::cout << std::endl;
		if (choice == "ADD"){
			phone.addContact();
		}else if (choice == "SEARCH"){
			phone.displayPhoneBook();
			std::string	index;
			while (!index.length()){
				std::cout << "Please choose a contact between 1-8: ";
				std::getline(std::cin, index);
				std::cout << std::endl;
				if(index.length() == 1 && index >= "1" && index <= "8"){
					phone.searchContact(stoi(index));
				}
				else{
					std::cout << "Your choice is not valid!" << std::endl;
					std::cout << std::endl;
					index = "";
					std::cin.clear();
				}
				
			}
		}else if(choice == "EXIT"){
			break;
		}else{
			std::cout << "Your choice is not valid!" << std::endl;
		}
		std::cout << std::endl;
		std::cin.clear();
	}
	
}
