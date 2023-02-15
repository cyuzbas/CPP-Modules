/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/14 17:39:46 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/15 13:14:02 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _isSigned(false), _gradeToSign(42), _gradeToExecute(42)
{
	// std::cout << "Default Constructor called" << std::endl;
	return;
}

AForm::AForm(std::string name, std::string target, int gradeToSign, int gradeToExecute) : _name(name), 
_target(target), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	// std::cout << "Informative Constructor called" << std::endl;
	if(gradeToSign < 1 || gradeToExecute < 1)
		throw (GradeTooHighException());
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw (GradeTooLowException());
	return;
}

AForm::AForm(const AForm &src) : _name(src._name), _target(src._target), _isSigned(src._isSigned),
_gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	// std::cout << "Copy Constructor called" << std::endl;
	return;
}

AForm::~AForm()
{
	// std::cout << "Destructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& src) {

	// std::cout << "Copy Assignment operator called." << std::endl;
	this->_isSigned = src._isSigned;
	const_cast<std::string &>(_name) = src.getName();
	const_cast<int &>(_gradeToSign) = src.getGradeToSign();
    const_cast<int &>(_gradeToExecute) = src.getGradeToExecute();
	return *this;
}

std::string	const AForm::getName() const
{
	return this->_name;	
}

std::string	AForm::getTarget() const 
{

	return this->_target;
}

bool AForm::getIsSigned() const
{
	return this->_isSigned;
}

int	AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

int	AForm::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

void AForm::setSigned(const bool value) 
{
	this->_isSigned = value;
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeToSign())
		this->_isSigned = true;
	else
		throw (GradeTooLowException());
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "[Form] Grade Too Low";
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "[Form] Grade Too High";
}

const char* AForm::NotSignedException::what() const throw() {

	return "Form not signed";
}

std::ostream & operator<<(std::ostream &o, AForm const &obj)
{
	o << PINK << "Form name: " << obj.getName() << std::endl << "Is signed: "; 
	obj.getIsSigned() ? o << "True" : o << "False";
	o << std::endl << "Grade to sign: " << obj.getGradeToSign() << std::endl <<
	"Grade to execute: " << obj.getGradeToExecute() << RESET << std::endl;
	return o;
}