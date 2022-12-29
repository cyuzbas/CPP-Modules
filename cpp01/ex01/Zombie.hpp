/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/29 15:41:53 by cyuzbas       #+#    #+#                 */
/*   Updated: 2022/12/29 16:11:33 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

#define GRAY	"\033[30m"
#define RED  	"\033[31m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

class Zombie {

private:

	std::string	_name;

public:

	Zombie( void );
	~Zombie( void );

	void	announce( void ) const;
	void	setName( std::string name );

};

Zombie* zombieHorde( int N, std::string name );

#endif