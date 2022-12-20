/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 12:40:07 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/20 13:54:28 by cyuzbas       ########   odam.nl         */
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
	int		_index;
	
public:

	Phonebook(void);
	~Phonebook(void);
	
	void 	setInfo(std::string message, std::string info,\
			void (Contact::*f)(std::string), Contact &contact);
	void	checkField(std::string str);
	void	displayPhoneBook(void);
	void	addContact(void);
	void	searchContact(int index);

};

#endif