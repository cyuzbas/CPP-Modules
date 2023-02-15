/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/14 17:39:43 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/15 17:12:30 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	
	std::string const	_name;
	const std::string 	_target;
	bool				_isSigned;
	int	const			_gradeToSign;
	int	const			_gradeToExecute;

public:

	AForm();
	AForm(std::string name, std::string target, int gradeToSign, int gradeToExecute);
	AForm(const AForm &src);
	virtual ~AForm();
	
	AForm& operator=(const AForm &src);
	
	std::string const	getName() const;
	std::string			getTarget() const;
	bool				getIsSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;
	
	void				setSigned(const bool value);
	
	void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat const &executor)const = 0;
	
	class	GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	
	class	GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};
	
    class NotSignedException : public std::exception {
        public:
            virtual const char *what() const throw();
    };
};

std::ostream & operator<<(std::ostream &o ,AForm const &obj);

#endif