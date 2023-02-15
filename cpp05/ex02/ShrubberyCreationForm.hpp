/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 14:24:40 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/15 17:04:30 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private :

	ShrubberyCreationForm();
	
public:

	ShrubberyCreationForm( const std::string target );
	ShrubberyCreationForm( const ShrubberyCreationForm &src );
	virtual ~ShrubberyCreationForm();
	
	ShrubberyCreationForm &operator=( const ShrubberyCreationForm &src );
	
	void execute(Bureaucrat const &executor)const;
	
};

#endif