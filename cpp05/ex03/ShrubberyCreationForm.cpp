/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 14:46:05 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/15 17:26:56 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("ShrubberyCreationForm", "default", 145, 37){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: AForm("ShrubberyCreationForm", target, 145, 37){}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &src )
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src) 
{
	this->setSigned(src.getIsSigned());
	return *this;
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	if (this->getIsSigned() == false)
		throw(NotSignedException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw(GradeTooLowException());

	std::ofstream outfile(this->getTarget() + "_shrubbery");
	if (!outfile.is_open()) {
		std::cout << "Couldn't open" << this->getTarget() + "_shrubbery" << std::endl;
		return;
	}
	outfile <<
	"            .        +          .      .          .\n"
	"     .            _        .                    .\n"
	"  ,              /;-._,-.____        ,-----.__\n"
	" ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n"
	"  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n"
	"                      ,    `./  \\:. `.   )==-'  .\n"
	"    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n"
	".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n"
	"       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n"
	"  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n"
	"   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n"
	"              \\:  `  X` _| _,\\/'   .-'\n"
	".               \":._:`\\____  /:'  /      .           .\n"
	"                    \\::.  :\\/:'  /              +\n"
	"   .                 `.:.  /:'  }      .\n"
	"           .           ):_(:;   \\           .\n"
	"                      /:. _/ ,  |\n"
	"                   . (|::.     ,`                  .\n"
	"     .                |::.    {\\\n"
	"                      |::.\\  \\ `.\n"
	"                      |:::(\\    |\n"
	"              O       |:::/{ }  |                  (o\n"
	"               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n"
	"          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n"
	"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "Created Shrubbery file" << std::endl;
	outfile.close();
	return;
}