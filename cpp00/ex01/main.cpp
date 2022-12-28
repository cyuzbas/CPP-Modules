/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/07 15:42:45 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/28 14:17:06 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	Phonebook	phone;
	std::string	choice;

	while (true)
	{
		std::cout << "\033[0;36mPlease make a choice by typing; ADD or SEARCH or EXIT: \033[0;37m";
		std::getline(std::cin, choice);
		std::cout << std::endl;
		if(std::cin.eof())
			break;
		if (choice == "ADD"){
			phone.addContact();
		}else if (choice == "SEARCH"){
			phone.displayPhoneBook();
			std::string	contact_index;
			while (!contact_index.length()){
				std::cout << "Please choose a contact between 1-8: ";
				std::getline(std::cin, contact_index);
				std::cout << std::endl;
				if(contact_index.length() == 1 \
				&& contact_index >= "1" && contact_index <= "8"){
					phone.searchContact(stoi(contact_index));
				}else{
					std::cout << "\033[0;33mYour choice is not valid!\033[0;37m" << std::endl;
					std::cout << std::endl;
					contact_index = "";
					std::cin.clear();
				}
			}
		}else if(choice == "EXIT"){
			break;
		}else{
			std::cout << "\033[0;33mYour choice is not valid!\033[0;37m" << std::endl;
		}
		std::cout << std::endl;
		std::cin.clear();
	}
	
}
