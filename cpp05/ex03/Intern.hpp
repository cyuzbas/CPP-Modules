/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 17:39:54 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/15 17:48:38 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class	Intern 
{
public:

	Intern();
	Intern(const Intern& src);
	virtual ~Intern();

	Intern& operator=(Intern const & src);

	AForm* makeForm(const std::string &name, const std::string &target);
	
    class FormDoesNotExistException : public std::exception {
        public:
            virtual const char *what() const throw();
    };
		
};

#endif