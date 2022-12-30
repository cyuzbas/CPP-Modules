/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/30 13:45:30 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/30 15:33:31 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

#define GRAY  	"\033[30m"
#define RED  	"\033[31m"
#define GREEN	"\033[32m"
#define YELLOW 	"\033[33m"
#define BLUE	"\033[34m"
#define PINK  	"\033[35m"
#define RESET	"\033[0m"

class Harl {

private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:

	Harl( void );
	~Harl( void );

	void complain( std::string level );

};

#endif