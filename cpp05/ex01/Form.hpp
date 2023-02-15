/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/14 17:39:43 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/15 13:02:40 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	
	std::string const	_name;
	bool				_isSigned;
	int	const			_gradeToSign;
	int	const			_gradeToExecute;

public:

	Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form &src);
	virtual ~Form();
	
	Form& operator=(const Form &src);
	
	std::string const	getName() const;
	bool				getIsSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;
	
	void beSigned(const Bureaucrat& bureaucrat);
	
	class	GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	
};

std::ostream & operator<<(std::ostream &o, Form const &obj);

#endif