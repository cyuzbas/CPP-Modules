/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/14 17:39:46 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/15 13:14:02 by cyuzbas       ########   odam.nl         */
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
	const_cast<std::string &>(_name) = src.getName();
	const_cast<int &>(_gradeToSign) = src.getGradeToSign();
    const_cast<int &>(_gradeToExecute) = src.getGradeToExecute();
	return *this;
}

std::string	const Form::getName() const
{
	return this->_name;	
}

bool Form::getIsSigned() const
{
	return this->_isSigned;
}

int	Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int	Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeToSign())
		this->_isSigned = true;
	else
		throw (GradeTooLowException());
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "[Form] Grade Too Low";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "[Form] Grade Too High";
}

std::ostream & operator<<(std::ostream &o, Form const &obj)
{
	o << PINK << "Form name: " << obj.getName() << std::endl << "Is signed: "; 
	obj.getIsSigned() ? o << "True" : o << "False";
	o << std::endl << "Grade to sign: " << obj.getGradeToSign() << std::endl <<
	"Grade to execute: " << obj.getGradeToExecute() << RESET << std::endl;
	return o;
}