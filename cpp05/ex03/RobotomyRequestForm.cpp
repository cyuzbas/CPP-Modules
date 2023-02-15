/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 16:54:29 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/15 17:25:08 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm()
: AForm(NULL, NULL, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) 
{
	*this = src;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	this->setSigned(src.getIsSigned());
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
	if (this->getIsSigned() == false)
		throw(NotSignedException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw(GradeTooLowException());

	std::cout << "drdrdrdrdrdrrrdrdrdrdr" << std::endl;
	std::srand(time(NULL));
	int random = rand() % 2;
	if (random == 0) {
		std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
	}
	else
		std::cout << "Robotomy failed..." << std::endl;
}