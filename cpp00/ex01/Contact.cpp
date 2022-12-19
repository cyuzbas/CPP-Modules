/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 12:38:11 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/19 17:59:08 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
	std::cout << "Contact Constructor called" << std::endl;
	return;
}

Contact::~Contact(void){
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Contact::setFirstName(std::string newFirstName){
	firstName = newFirstName;
}

void	Contact::setLastName(std::string newLastName){
	lastName = newLastName;
}

void	Contact::setNickname(std::string newNickname){
	nickname = newNickname;
}

void	Contact::setPhoneNumber(std::string newPhoneNumber){
	phoneNumber = newPhoneNumber;
}

void	Contact::setDarkSecret(std::string newDarkSecret){
	darkSecret = newDarkSecret;
}

std::string	Contact::getFirstName(void){
	return (firstName);
}

std::string	Contact::getLastName(void){
	return (lastName);
}

std::string	Contact::getNickname(void){
	return (nickname);
}

std::string	Contact::getPhoneNumber(void){
	return (phoneNumber);
}

std::string	Contact::getDarkSecret(void){
	return (darkSecret);
}
