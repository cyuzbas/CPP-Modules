/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 12:38:11 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/19 19:21:42 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook(void){
	std::cout << "Phone Constructor called" << std::endl;
	index = 0;        
	return;
}

Phonebook::~Phonebook(void){
	std::cout << "Destructor called" << std::endl;
	return;
}

void Phonebook::setInfo(std::string message, std::string info, void (Contact::*f)(std::string), Contact& contact){
	while (!info.length()){
		std::cout << message;
		std::getline(std::cin, info);
		if (!info.length())
			std::cout << "Contact can't have empty fields" << std::endl;
		else
			(contact.*f)(info);
	}
	std::cin.clear();
}

int	Phonebook::addContact(void){
	std::string info;

	Phonebook::setInfo("Enter First Name: ", info, &Contact::setFirstName, this->contacts[index]);
	Phonebook::setInfo("Enter Last Name: ", info, &Contact::setLastName, this->contacts[index]);
	Phonebook::setInfo("Enter Nickname: ", info, &Contact::setNickname, this->contacts[index]);
	Phonebook::setInfo("Enter Phone Number: ", info, &Contact::setPhoneNumber, this->contacts[index]);
	Phonebook::setInfo("Enter Darkest Secret: ", info, &Contact::setDarkSecret, this->contacts[index]);
	index++;
	// while (!info.length()){
	// 	std::cout << "Enter First Name: ";
	// 	std::getline(std::cin, info);
	// 	if (!info.length())
	// 		std::cout << "Contact can't have empty fields" << std::endl;
	// 	else
	// 		contact.setFirstName(info);
	// }
	// std::cin.clear();
	// info = "\0";
	// while (!info.length()){
	// 	std::cout << "Enter Last Name: ";
	// 	std::getline(std::cin, info);
	// 	if (!info.length())
	// 		std::cout << "Contact can't have empty fields" << std::endl;
	// 	else
	// 		contact.setLastName(info);
	// }
	// info = "\0";
	// // std::cin.clear();
	// while (!info.length()){
	// 	std::cout << "Enter Nickname: ";
	// 	std::getline(std::cin, info);
	// 	if (!info.length())
	// 		std::cout << "Contact can't have empty fields" << std::endl;
	// 	else
	// 		contact.setNickname(info);
	// }
	// std::cin.clear();
	// info = "\0";
	// while (!info.length()){
	// 	std::cout << "Enter Phone Number: ";
	// 	std::getline(std::cin, info);
	// 	if (!info.length())
	// 		std::cout << "Contact can't have empty fields" << std::endl;
	// 	else
	// 		contact.setPhoneNumber(info);
	// }
	// info = "\0";
	// std::cin.clear();
	// while (!info.length()){
	// 	std::cout << "Enter Darkest Secret: ";
	// 	std::getline(std::cin, info);
	// 	if (!info.length())
	// 		std::cout << "Contact can't have empty fields" << std::endl;
	// 	else
	// 		contact.setDarkSecret(info);
	// }
	// std::cin.clear();

	
	// std::cout << info << std::endl;
	return (0);
}

void checkField(std::string str) {
  if (str.length() > 10)
    std::cout << str.substr(0, 9) << ".";
  else
    std::cout << std::setw(10) << str;
}

void Phonebook::displayPhoneBook(void){

	std::cout << " Your Awesome Phone Book Contact Information" << std::endl;
	std::cout << "*-------------------------------------------*" << std::endl;
	std::cout << "|" << std::setw(10) << "Index"<< "|" << "First Name" << "|" \
			<< std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < 8; i++){
		std::cout << "|";
		std::cout << std::setw(10) << (i + 1) << "|";
		checkField(this->contacts[i].getFirstName());
		std::cout << "|";
		checkField(this->contacts[i].getLastName());
		std::cout << "|";
		checkField(this->contacts[i].getNickname());
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << "*-------------------------------------------*" << std::endl;
}

int Phonebook::searchContact(int idx){
	std::cout << idx << ". Contact Information" << std::endl;
	idx--;
	std::cout << "----------------------" << std::endl;
	std::cout << "First Name: " << this->contacts[idx].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->contacts[idx].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[idx].getNickname() << std::endl;
	std::cout << "Phone Number: " << this->contacts[idx].getNickname() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[idx].getNickname() << std::endl;
	return (0);
}
