/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/09 16:31:40 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/10 17:11:32 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

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

class WrongAnimal
{
protected:

	std::string	_type;
	
public:

	WrongAnimal( void );
	WrongAnimal( std::string type );
	WrongAnimal( WrongAnimal const &src );
	virtual ~WrongAnimal( void );
	
	WrongAnimal &operator=( WrongAnimal const &src );
	
	std::string getType( void )const;

	virtual void makeSound( void )const;
};

#endif