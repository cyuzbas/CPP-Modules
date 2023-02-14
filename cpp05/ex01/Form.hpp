/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/14 17:39:43 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/14 18:20:03 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

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
	~Form();
	
	Form& operator=(const Form &src);
	
	const std::string	getName() const;
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

#endif