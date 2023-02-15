/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 18:23:23 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/15 17:23:06 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default Bureaucrat"), _grade(42)
{
	// std::cout << GRAY << "Default Constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	if(grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	this->_grade = grade;
	// std::cout << GREEN << "Name and Grade Constructor called" << RESET << std::endl;
	
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src._name)
{
	// std::cout << BLUE << "Copy Constructor called" << RESET << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << RED << "Destructor called" << RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &src )
{
	// std::cout << CYAN << "Copy Assignment operator called" << RESET << std::endl;
	const_cast<std::string &>(_name) = src._name;
	this->_grade = src.getGrade();
	return *this;
}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade > 1){
		this->_grade--;
		std::cout << PINK << "Bureaucrat grade incremented to " 
		<< getGrade() << RESET << std::endl;
	}
	else
		throw (GradeTooHighException());
	
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade < 150){
		this->_grade++;
		std::cout << YELLOW << "Bureaucrat grade decremented to " 
		<< getGrade() << RESET << std::endl;
	}
	else
		throw (GradeTooLowException());
}

void	Bureaucrat::signForm(AForm& form)
{
	try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) {

	try {
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << this->_name << " couldn't execute " << form.getName() << " form because, " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what( void ) const throw() {
    return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw() {
    return "Grade Too Low";
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &obj)
{
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return o;
}