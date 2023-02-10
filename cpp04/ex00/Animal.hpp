/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 15:42:19 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/10 17:11:14 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define GRAY	"\033[30m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW	"\033[33m"
#define BLUE	"\033[34m"
#define PINK	"\033[35m"
#define CYAN	"\033[36m"
#define RESET	"\033[0m"

class Animal
{
protected:

	std::string	_type;
	
public:

	Animal( void );
	Animal( std::string type );
	Animal( Animal const &src );
	virtual ~Animal( void );
	
	Animal &operator=( Animal const &src );
	
	std::string getType( void )const;

	virtual void makeSound( void )const;
};

#endif