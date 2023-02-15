/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 18:23:18 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/15 17:11:25 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

#define GRAY	"\033[30m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define PINK	"\033[35m"
#define CYAN	"\033[36m"
#define RESET	"\033[0m"

class AForm;

class Bureaucrat
{
private:
	
	std::string const	_name;
	int					_grade;
	
public:

	Bureaucrat();
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const & src );	
	virtual ~Bureaucrat();
	
	Bureaucrat &operator=( const Bureaucrat &src );
	
	std::string getName() const;
	int         getGrade() const;

	void		incrementGrade();
	void		decrementGrade();

	void		signForm(AForm& form);
	void 		executeForm(AForm const & form);
	
	
	class	GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class	GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &obj);

#endif