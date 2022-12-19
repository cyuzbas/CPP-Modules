/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 12:40:07 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/19 17:56:29 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class	Contact {
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string darkSecret;
public:
	Contact(void);
	~Contact(void);
	void	setFirstName(std::string new_first_name);
	void	setLastName(std::string new_last_name);
	void	setNickname(std::string new_nickname);
	void	setPhoneNumber(std::string new_phone_number);
	void	setDarkSecret(std::string new_dark_secret);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickname(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkSecret(void);
};

#endif
