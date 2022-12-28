/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 12:38:11 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/28 14:15:56 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook(void){
	std::cout << std::endl;
	std::cout << "\033[0;32mWelcome to your awesome phonebook!\033[0;37m";
	std::cout << std::endl << std::endl;
	_index = 0;        
	return;
}

Phonebook::~Phonebook(void){
	std::cout << "\033[0;31mYou are leaving your awesome phonebook! BYE!\033[0;37m";
	std::cout << std::endl << std::endl;
	return;
}

void Phonebook::setInfo(std::string message, std::string info, \
						void (Contact::*f)(std::string), Contact& contact){
	while (!info.length()){
		std::cout << message;
		std::getline(std::cin, info);
		if (!info.length())
			std::cout << "\033[0;33mContact can't have empty fields\033[0;37m" << std::endl;
		else
			(contact.*f)(info);
	}
	std::cin.clear();
}

void	Phonebook::addContact(void){
	std::string info;
	int			i;
	
	if (_index >= 8)
		i = _index % 8;
	else
		i = _index;
	Phonebook::setInfo("Enter First Name: ", info, &Contact::setFirstName, this->contacts[i]);
	Phonebook::setInfo("Enter Last Name: ", info, &Contact::setLastName, this->contacts[i]);
	Phonebook::setInfo("Enter Nickname: ", info, &Contact::setNickname, this->contacts[i]);
	Phonebook::setInfo("Enter Phone Number: ", info, &Contact::setPhoneNumber, this->contacts[i]);
	Phonebook::setInfo("Enter Darkest Secret: ", info, &Contact::setDarkSecret, this->contacts[i]);
	_index++;
}

void Phonebook::checkField(std::string str) {
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
	std::cout << std::endl;
}

void Phonebook::searchContact(int idx){
	std::cout << idx << ". Contact Information" << std::endl;
	idx--;
	std::cout << "----------------------" << std::endl;
	std::cout << "First Name: " << this->contacts[idx].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->contacts[idx].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[idx].getNickname() << std::endl;
	std::cout << "Phone Number: " << this->contacts[idx].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[idx].getDarkSecret() << std::endl;
}
