/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 16:54:26 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/15 17:24:10 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm(NULL, NULL, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialPardonForm", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) 
{
	*this = src;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src) 
{
	this->setSigned(src.getIsSigned());
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{
	if (!this->getIsSigned())
		throw(NotSignedException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw(GradeTooLowException());

	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return;
}
