/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 12:38:11 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/20 13:59:01 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
	return;
}

Contact::~Contact(void){
	return;
}

void	Contact::setFirstName(std::string newFirstName){
	_firstName = newFirstName;
}

void	Contact::setLastName(std::string newLastName){
	_lastName = newLastName;
}

void	Contact::setNickname(std::string newNickname){
	_nickname = newNickname;
}

void	Contact::setPhoneNumber(std::string newPhoneNumber){
	_phoneNumber = newPhoneNumber;
}

void	Contact::setDarkSecret(std::string newDarkSecret){
	_darkSecret = newDarkSecret;
}

std::string	Contact::getFirstName(void){
	return (_firstName);
}

std::string	Contact::getLastName(void){
	return (_lastName);
}

std::string	Contact::getNickname(void){
	return (_nickname);
}

std::string	Contact::getPhoneNumber(void){
	return (_phoneNumber);
}

std::string	Contact::getDarkSecret(void){
	return (_darkSecret);
}
