/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 12:40:07 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/20 14:08:36 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class	Contact {
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string _darkSecret;
public:
	Contact(void);
	~Contact(void);
	void	setFirstName(std::string newFirstName);
	void	setLastName(std::string newLastName);
	void	setNickname(std::string newNickname);
	void	setPhoneNumber(std::string newPhoneNumber);
	void	setDarkSecret(std::string newDarkSecret);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkSecret(void);
};

#endif
