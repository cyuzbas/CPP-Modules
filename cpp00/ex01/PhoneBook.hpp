/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 12:40:07 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/19 19:27:03 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class Phonebook {
private:
	Contact contacts[8];
	int		index;
public:
	Phonebook(void);
	~Phonebook(void);
	void 	setInfo(std::string message, std::string info,\
			void (Contact::*f)(std::string), Contact &contact);
	int		addContact(void);
	void	checkField(std::string str);
	void	displayPhoneBook(void);
	int		searchContact(int index);
};

#endif