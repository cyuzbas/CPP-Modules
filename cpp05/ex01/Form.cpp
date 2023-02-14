/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/14 17:39:46 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/14 18:34:16 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(42), _gradeToExecute(42)
{
	// std::cout << "Default Constructor called" << std::endl;
	return;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), 
_isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	// std::cout << "Informative Constructor called" << std::endl;
	if(gradeToSign < 1 || gradeToExecute < 1)
		throw (GradeTooHighException());
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw (GradeTooLowException());
	return;
}

Form::Form(const Form &src) : _name(src._name), _isSigned(src._isSigned)
, _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	// std::cout << "Copy Constructor called" << std::endl;
	return;
}

Form::~Form()
{
	// std::cout << "Destructor called" << std::endl;
}

Form& Form::operator=(const Form& src) {

	// std::cout << "Copy Assignment operator called." << std::endl;
	this->_isSigned = src._isSigned;
	return *this;
}